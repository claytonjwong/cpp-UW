#include "XmlReader.h"
#include "Parse.h"

namespace Xml
{
    HElement Reader::loadXml(std::istream& in)
    {
        // Recursively read all elements from the input stream
        return readElement(in, nullptr);
    }
    
    
    HElement Reader::readElement(std::istream& in, Element* parentElementP)
    {
        // Position to start of element name
        Parse::eat(in);
        if (in.get() != '<')
        {
            throw std::runtime_error("Invalid element syntax - expected '>'");
        }
        
        // Read element name and create Element object
        std::string elementName;
        in >> elementName;
        
        HElement element(new Element(elementName));
        
        // If this element has a parent, append to it
        if (parentElementP)
        {
            parentElementP->appendChild(element);
        }
        
        // Parse tokens until the end of this element
        bool inElement = true;
        do
        {
            Parse::eat(in);
            int nextCharacter = in.peek();
            
            if (nextCharacter == '/')
            {
                in.ignore();
                Parse::eat(in);
                
                if (in.get() != '>')
                {
                    throw std::runtime_error("Invalid element syntax - expected '>'");
                }
                
                inElement = false;
            }
            
            else if (nextCharacter == '>')
            {
                in.ignore();
                
                // read child elements
                readElement(in, element.get());
            }
            
            else if (nextCharacter == '<')
            {
                in.ignore();
                Parse::eat(in);
                nextCharacter = in.peek();
                
                // Check for end of element
                if (nextCharacter == '/')
                {
                    std::string token = Parse::readUntil(in, ">");
                    in.ignore();
                    
                    // ending this element
                    inElement = false;
                }
                
                // Check for comment
                else if (nextCharacter == '!')
                {
                    // ignore comment
                    std::string comment = Parse::readUntil(in, ">");
                    in.ignore();
                }
                
                // Must be a child new element
                else
                {
                    in.unget();
                    readElement(in, element.get());
                }
            }
            
            else
            {
                while (readAttribute(in, *element)) { }
            }
            
        } while (inElement);
        
        return element;
    }
    
    
    bool Reader::readAttribute(std::istream& in,
                               Element& parent)
    {
        // Get the attribute name
        std::string name = Parse::readUntil(in, "=");
        in.ignore();
        Parse::trim(name);
        
        // Extract the attribute value, which is in single or double quotes
        Parse::eat(in);
        int nextCharacter = in.get();
        if (nextCharacter != '"' && nextCharacter != '\'')
        {
            throw std::runtime_error("Invalid attribute syntax - expected quote");
        }
        
        std::string value = Parse::readUntil(in, "\"\'");
        in.ignore();
        
        parent.setAttribute(name, value);
        
        // Determine if we're at the end of the element or not
        Parse::eat(in);
        nextCharacter = in.peek();
        if (nextCharacter == '/' || nextCharacter == '>')
        {
            // No more attributes
            return false;
        }
        
        // More attributes
        return true;
    }
    
}