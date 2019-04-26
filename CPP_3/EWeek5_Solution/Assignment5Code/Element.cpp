#include "Element.h"
#include "tinyxml2.h"

namespace Xml
{
    using namespace tinyxml2;

    // Use PImpl to hide tinyxml2 implementation detail from users of Element
    struct Element::PImpl
    {
        explicit PImpl(std::unique_ptr<tinyxml2::XMLDocument> document)
            : myDocument(std::move(document)),
            myElement(myDocument->RootElement())
        {
        }

        explicit PImpl(tinyxml2::XMLElement* element)
            : myElement(element)
        {
        }

        std::unique_ptr<tinyxml2::XMLDocument> myDocument;
        tinyxml2::XMLElement* myElement;
    };

    Element::Element() :
        myPImpl(std::make_unique<PImpl>(std::make_unique<XMLDocument>()))
    {
    }

    Element::Element(const std::string& name) :
        myPImpl(std::make_unique<PImpl>(std::make_unique<XMLDocument>()))
    {
        myPImpl->myElement = myPImpl->myDocument->NewElement(name.c_str());
        myPImpl->myElement->SetName(name.c_str());
    }

    Element::~Element() = default;

    void Element::createFromXml(std::string& xmlStr)
    {
        if (myPImpl->myDocument->Parse(xmlStr.c_str()) != XML_SUCCESS)
        {
            throw std::runtime_error("Error Parsing XML stream");
        }

        myPImpl->myElement = myPImpl->myDocument->RootElement();
    }

    void Element::setAttribute(
        const std::string& name,
        const std::string& value)
    {
        myPImpl->myElement->SetAttribute(name.c_str(), value.c_str());
    }

    std::string Element::getAttribute(const std::string& name) const
    {
        const auto value{ myPImpl->myElement->Attribute(name.c_str()) };

        return std::string(value == nullptr ? "" : value);
    }

    std::unique_ptr<Element> Element::makeElement(const std::string& name) const
    {
        auto element = std::make_unique<Element>();
        element->myPImpl = std::make_unique<PImpl>(myPImpl->myElement->GetDocument()->NewElement(name.c_str()));

        return element;
    }

    Element::HElement Element::appendChild(const std::string& name) noexcept
    {
        auto newElement = makeElement(name);
        myPImpl->myElement->InsertEndChild(newElement->myPImpl->myElement);

        return newElement;
    }

    Element::AttributeMap Element::getAttributes() const noexcept
    {
        AttributeMap attrs;

        auto attr = myPImpl->myElement->FirstAttribute();

        while (attr != nullptr)
        {
            attrs.emplace(attr->Name(), attr->Value());
            attr = attr->Next();
        }

        return attrs;
    }

    Element::Collection Element::getChildElements() const noexcept
    {
        Collection nodes;

        if (!myPImpl->myElement->NoChildren())
        {
            for (auto node = myPImpl->myElement->FirstChildElement(); node != nullptr; node = node->NextSiblingElement())
            {
                auto element = std::make_unique<Element>();
                element->myPImpl = std::make_unique<PImpl>(node);
                nodes.emplace_back(std::move(element));
            }
        }

        return nodes;
    }

    std::string Element::getName() const noexcept
    {
        return myPImpl->myElement->Name();
    }
}
