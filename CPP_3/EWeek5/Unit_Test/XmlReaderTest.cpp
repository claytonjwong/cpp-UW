#include "XmlReader.hpp"
#include "VectorGraphic.hpp"
#include "TestHarness.h"
#include <sstream>

#define STR(a) #a

const char* const SceneXml = STR(
<Scene width="800" height="600">
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

TEST(loadXml, XmlReader)
{
    std::stringstream xmlStream(SceneXml);

    Xml::HElement root = Xml::Reader::loadXml(xmlStream);

    CHECK_EQUAL("Scene", root->getName());
    CHECK_EQUAL("800", root->getAttribute("width"));
    CHECK_EQUAL("600", root->getAttribute("height"));
    CHECK(root->getAttribute("depth").empty());

    Xml::AttributeMap attributes = root->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("800", attributes["width"])
    CHECK_EQUAL("600", attributes["height"])

    Xml::ElementList children = root->getChildElements();
    CHECK(!children.empty());
    CHECK_EQUAL(2, children.size());

    Xml::HElement layer0 = children[0];
    CHECK_EQUAL("Layer", layer0->getName());
    attributes = layer0->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(1, attributes.size());
    CHECK_EQUAL("sky", layer0->getAttribute("alias"));

    Xml::ElementList layerChildren = layer0->getChildElements();
    CHECK(!layerChildren.empty());
    CHECK_EQUAL(2, layerChildren.size());
    Xml::HElement placedGraphic = layerChildren[0];
    CHECK_EQUAL("PlacedGraphic", placedGraphic->getName());
    attributes = placedGraphic->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("0", placedGraphic->getAttribute("x"));
    CHECK_EQUAL("0", placedGraphic->getAttribute("y"));

}

const char* const SceneXml2 = STR(
<Scene width="1234" height="567">
  <Layer alias="sky">
    <PlacedGraphic x="69" y="69">
      <VectorGraphic closed="false">
        <Point x="1" y="2" />
        <Point x="3" y="4" />
        <Point x="5" y="6" />
      </VectorGraphic>
    </PlacedGraphic>
    <PlacedGraphic x="700" y="0">
      <VectorGraphic closed="false">
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

TEST(loadXml2, XmlReader)
{
    std::stringstream xmlStream(SceneXml2);

    Xml::HElement root = Xml::Reader::loadXml(xmlStream);

    CHECK_EQUAL("Scene", root->getName());
    CHECK_EQUAL("1234", root->getAttribute("width"));
    CHECK_EQUAL("567", root->getAttribute("height"));
    CHECK(root->getAttribute("depth").empty());

    Xml::AttributeMap attributes = root->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("1234", attributes["width"])
    CHECK_EQUAL("567", attributes["height"])

    Xml::ElementList children = root->getChildElements();
    CHECK(!children.empty());
    CHECK_EQUAL(2, children.size());

    Xml::HElement layer0 = children[0];
    CHECK_EQUAL("Layer", layer0->getName());
    attributes = layer0->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(1, attributes.size());
    CHECK_EQUAL("sky", layer0->getAttribute("alias"));

    Xml::ElementList layerChildren = layer0->getChildElements();
    CHECK(!layerChildren.empty());
    CHECK_EQUAL(2, layerChildren.size());
    Xml::HElement placedGraphic = layerChildren[0];
    CHECK_EQUAL("PlacedGraphic", placedGraphic->getName());
    attributes = placedGraphic->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("69", placedGraphic->getAttribute("x"));
    CHECK_EQUAL("69", placedGraphic->getAttribute("y"));

}


const char* const SceneXmlWithStrokes = STR(
<Scene width="800" height="800">
  <Layer alias="bottom">
    <PlacedGraphic x="11" y="12">
      <VectorGraphic closed="true">
        <Stroke tip="slash" size="7" color="FF0000" />
        <Point x="100" y="500" />
        <Point x="100" y="100" />
        <Point x="500" y="600" />
      </VectorGraphic>
    </PlacedGraphic>
    <PlacedGraphic x="400" y="300">
      <VectorGraphic closed="true">
        <Stroke tip="square" size="5" color="00FF00" />
        <Point x="0" y="0" />
        <Point x="0" y="100" />
        <Point x="100" y="100" />
        <Point x="100" y="0" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
  <Layer alias="top">
    <PlacedGraphic x="250" y="250">
      <VectorGraphic closed="false">
        <Stroke tip="square" size="3" color="0000FF" />
        <Point x="0" y="0" />
        <Point x="0" y="100" />
        <Point x="100" y="100" />
        <Point x="100" y="0" />
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
</Scene>);


TEST(loadXmlWithStrokes, XmlReader)
{
    std::stringstream xmlStream(SceneXmlWithStrokes);
    
    Xml::HElement root = Xml::Reader::loadXml(xmlStream);
    
    CHECK_EQUAL("Scene", root->getName());
    CHECK_EQUAL("800", root->getAttribute("width"));
    CHECK_EQUAL("800", root->getAttribute("height"));
    CHECK(root->getAttribute("depth").empty());
    
    Xml::AttributeMap attributes = root->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("800", attributes["width"])
    CHECK_EQUAL("800", attributes["height"])
    
    Xml::ElementList children = root->getChildElements();
    CHECK(!children.empty());
    CHECK_EQUAL(2, children.size());
    
    Xml::HElement layer0 = children[0];
    CHECK_EQUAL("Layer", layer0->getName());
    attributes = layer0->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(1, attributes.size());
    CHECK_EQUAL("bottom", layer0->getAttribute("alias"));
    
    Xml::ElementList layerChildren = layer0->getChildElements();
    CHECK(!layerChildren.empty());
    CHECK_EQUAL(2, layerChildren.size());
    Xml::HElement placedGraphic = layerChildren[0];
    CHECK_EQUAL("PlacedGraphic", placedGraphic->getName());
    attributes = placedGraphic->getAttributes();
    CHECK(!attributes.empty());
    CHECK_EQUAL(2, attributes.size());
    CHECK_EQUAL("11", placedGraphic->getAttribute("x"));
    CHECK_EQUAL("12", placedGraphic->getAttribute("y"));
    
}

