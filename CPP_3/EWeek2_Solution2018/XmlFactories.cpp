#include "XmlFactories.h"

using namespace Xml;

HElement ElementFactory::createElement(const std::string& name)
{
	HElement hElem{ dynamic_cast<IElement*>(new TinyElement(name)) };
	return std::move(hElem);
}

std::shared_ptr<IXmlReader> ReaderFactory::theReader{ new TinyReader() };

const IXmlReader& ReaderFactory::getReader()
{
	return *theReader;
}