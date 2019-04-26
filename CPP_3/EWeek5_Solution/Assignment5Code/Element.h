#pragma once

#include <map>
#include <string>
#include <vector>

namespace Xml
{
    class Element
    {
    public:
        using HElement = std::unique_ptr<Element>;
        using Collection = std::vector<HElement>;
        using AttributeMap = std::map<std::string, std::string>;

        Element();
        ~Element();
        explicit Element(const std::string& name);

        Element(const Element& other) = delete;
        Element(Element&& other) = delete;
        Element& operator=(const Element& other) = delete;
        Element& operator=(Element&& other) = delete;

        void createFromXml(std::string& xmlStr);

        std::string getName() const noexcept;

        void setAttribute(const std::string& name, const std::string& value);
        std::string getAttribute(const std::string& name) const;
        AttributeMap getAttributes() const noexcept;

        Collection getChildElements() const noexcept;

        HElement appendChild(const std::string& name) noexcept;

    private:
        std::unique_ptr<Element> makeElement(const std::string& name) const;

        struct PImpl;
        std::unique_ptr<PImpl> myPImpl;
    };
}
