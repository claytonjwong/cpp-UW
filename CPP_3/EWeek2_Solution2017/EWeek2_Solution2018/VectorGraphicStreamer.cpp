#include "VectorGraphicStreamer.h"
#include "Parse.h"
#include "Point.h"
#include <iostream>
#include <sstream>
#include <deque>
#include <map>
#include <algorithm>
#include <regex>

using namespace std::string_literals;
using namespace std;

namespace
{
	static const string closingVectorGraphicTag{ "</VectorGraphic" };
	static const string openingVectorGraphicTag{ "<VectorGraphic" };
	static const string closingPointTag{ "</Point" };
	static const string openingPointTag{ "<Point" };
	static const std::regex attribute("(\\w+)=\"(\\w+)\"");

	deque<string> splitNodes(istream& xml)
	{
		deque<string> nodes;
		xml.seekg(0, xml.end);
		auto size{ xml.tellg() };
		xml.seekg(0);

		while (!xml.eof())
		{
			string str(size, '\n');
			xml.getline(&str[0], size, '>');
			Parse::trim(str);
			str.shrink_to_fit();

			if (str.length() > 1)
			{
				nodes.push_back(std::move(str));
			}
		}

		return std::move(nodes);
	}
    
	void testValidVectorGraphicXML(deque<string>& theNodes)
	{		
		if (theNodes.front().find(openingVectorGraphicTag) != 0 
			|| theNodes.back().compare(0, closingVectorGraphicTag.length(), closingVectorGraphicTag) != 0)
		{
			throw std::runtime_error{ "Invalid XML: root element tag not VectorGraphic" };
		}
	}

	void testValidVectorGraphicAttributes(std::smatch& match)
	{
		if (match.size() != 3 || match[1] != "closed")
		{
			throw std::runtime_error{ "Invalid VectorGraphic XML node: does not contain a closed attribute." };
		}
	}

	void testValidPointXML(deque<string>& theNodes)
	{
		auto it = theNodes.cbegin();

		while (it != theNodes.cend())
		{
			const string& pointOpen{ *it };
			if (pointOpen.find(openingPointTag) != 0)
			{
				throw std::runtime_error{ "Invalid XML: Node is not a Point node." };
			}

			if (pointOpen.find('/',0) != pointOpen.length() - 2)
			{
				++it;
				if ((*it).compare(0, closingPointTag.length(), closingPointTag) != 0)
				{
					throw std::runtime_error{ "Invalid XML: Point node is not properly closed." };
				}
			}
			++it;
		}
	}

	void testValidPoint(std::map<string, int>& coords)
	{
		if (coords.size() != 2)
		{
			throw std::runtime_error{ "Invalid Point: does not have exactly 2 coordinates." };
		}
	}

	void removePointClosingTags(deque<string>& theNodes)
	{
		auto newend = std::remove_if(theNodes.begin(), theNodes.end(), [](auto& str) { return str.compare(0, closingPointTag.length(), closingPointTag) == 0; });

		theNodes.erase(newend, theNodes.end());
	}

	std::map<std::string, int> getPointAttrs(const std::string& text) 
	{
		std::smatch match;
		std::string remainder(text);
		std::map<std::string, int> attrs;

		while (std::regex_search(remainder, match, attribute)) 
		{
			attrs.emplace(match[1], std::stoi(match[2])); //stoi throws if not a valid conversion
			remainder = match.suffix();
		}

		return std::move(attrs);
	}

	VG::VectorGraphic parseVectorGraphic(deque<string>& theNodes)
	{
		testValidVectorGraphicXML(theNodes);

		theNodes.pop_back();
		
		std::smatch match;
		std::regex_search(theNodes.front(), match, attribute);

		VG::VectorGraphic graphic;		
		
		testValidVectorGraphicAttributes(match);

        stringstream ss(match[2]);
		auto closed{ Parse::getBool(ss) };
		closed ? graphic.closeShape() : graphic.openShape();		

		theNodes.pop_front();

		testValidPointXML(theNodes);
		removePointClosingTags(theNodes);

		std::map<string, int> coords;

		while (theNodes.size() != 0)
		{
			std::map<string, int> coords{ getPointAttrs(theNodes.front()) };
			theNodes.pop_front();

			graphic.addPoint(VG::Point(coords.at("x"), coords.at("y")));
		}

		return std::move(graphic);
	}
}


namespace VG
{

	VectorGraphic VectorGraphicStreamer::fromXml(std::istream& xml)
	{
		deque<string> nodes{ splitNodes(xml) };		

		VectorGraphic vg{ parseVectorGraphic(nodes) };


		return std::move(vg);
	}

	void VectorGraphicStreamer::toXml(const VectorGraphic& vg,
	                                    std::ostream& os)
	{
		os << "<VectorGraphic closed=\"" << std::boolalpha << vg.isClosed() << "\">" << std::endl;        
	        
	    for (auto i = 0U; i < vg.getPointCount(); ++i)
	    {
	        auto& p = vg.getPoint(i);
	        os << "<Point x=\"" << p.getX() << "\" y=\"" << p.getY() << "\"/>" << std::endl;
	    }
	        
	    os << "</VectorGraphic>";
	}
}
