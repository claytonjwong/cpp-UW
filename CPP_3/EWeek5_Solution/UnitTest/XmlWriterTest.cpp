#include "XmlWriter.h"
#include "VectorGraphic.h"
#include "TestHarness.h"
#include "XmlReader.h"
#include <algorithm>
#include <iterator>
#include <string>
#include <cctype>

#define STR(a) #a

const char* const SceneXml = STR(
<Scene height="600" width = "800">
  <Layer alias="sky">
    <PlacedGraphic x="0" y="0">
      <VectorGraphic closed="true">
        <Point x="1" y="2" />
        <Point x="3" y="4" />
        <Point x="5" y="6" />
      </VectorGraphic>
    </PlacedGraphic>
    <PlacedGraphic x="700" y="0">
      <VectorGraphic closed="true">
        <Point x="7" y="8" />
        <Point x="9" y="10" />
        <Point x="11" y="12" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
  <Layer alias="mountains">
    <PlacedGraphic x="250" y="250">
      <VectorGraphic closed="false">
        <Point x="13" y="14" />
        <Point x="15" y="19" />
        <Point x="17" y="18" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
</Scene>);

std::string removeWhitespace(std::string s)
{
    s.erase(std::remove_if(std::begin(s), std::end(s), [](auto ch) { return std::isspace(ch); }), std::end(s));

    return s;
}

TEST(writeXml, XmlWriter)
{
    std::stringstream xmlStream(SceneXml);
    const auto root = Xml::XmlReader::loadXml(xmlStream);

    std::stringstream xml;
    Xml::Writer::writeXml(*root, xml);

    // strings may vary in whitespace characters. Remove them for valid comparison
    const auto actualXml = removeWhitespace(xml.str());
    const auto expectedXml = removeWhitespace(xmlStream.str());

    CHECK_EQUAL(expectedXml, actualXml);
}