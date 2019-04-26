#pragma once
#include <memory>
#include <string>
#include <vector>
#include <map>

namespace Xml
{
	class IElement;
	using HElement = std::shared_ptr<IElement>;
	using ElementCollection = std::vector<HElement>;
	using AttributeMap = std::map<std::string, std::string>;

	class IElement
	{
	public:
		virtual void createFromXml(std::string& xmlStr) = 0;
		
		virtual std::string getName() const noexcept = 0;

		virtual void setAttribute(const std::string& name, const std::string& value) = 0;
		virtual std::string getAttribute(const std::string& name) const = 0;
		virtual AttributeMap getAttributes() const noexcept = 0;

		virtual ElementCollection getChildElements() const noexcept = 0;

		virtual HElement appendChild(const std::string& name) noexcept = 0;
	};

	class IXmlReader
	{
	public:
		virtual HElement loadXml(std::istream& in) const = 0;
	};
}
