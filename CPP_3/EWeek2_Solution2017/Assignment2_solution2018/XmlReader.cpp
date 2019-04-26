#include "XmlReader.h"
#include "Parse.h"
#include <memory>
#include <sstream>

namespace Xml
{
    HElement TinyReader::loadXml(std::istream& in) const
    {
		std::istreambuf_iterator<char> eos;
		std::string xmlStr(std::istreambuf_iterator<char>(in), eos);

		auto elem{ new TinyElement() };
		HElement hElem{ dynamic_cast<IElement*>(elem) };

		elem->createFromXml(xmlStr);

		return std::move(hElem);
    }        
}