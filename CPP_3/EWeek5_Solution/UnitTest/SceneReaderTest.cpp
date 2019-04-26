#include "Scene.h"
#include "SceneReader.h"
#include "TestHarness.h"
#include "XmlReader.h"

const std::string TestXml = R"(
<Scene width="800" height="600">
  <Layer alias="sky">
    <PlacedGraphic x="0" y="0">
      <VectorGraphic closed="true">
        <Point x="1" y="2" />
        <!-- Comment -->
        <Point x="3" y="4" />
        <Point x="5" y="6" />
      </VectorGraphic>
    </PlacedGraphic>
    <!-- Comment -->
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
        <!-- etc... -->
      </VectorGraphic>
    </PlacedGraphic>
  </Layer>
</Scene>)";

TEST(ReadScene, SceneReader)
{
    std::stringstream xmlStream(TestXml);
    const auto root = Xml::XmlReader::loadXml(xmlStream);

    auto scene = Framework::SceneReader::readScene(*root);

    CHECK_EQUAL(800, scene.getWidth());
    CHECK_EQUAL(600, scene.getHeight());

    auto numberOfLayers = 0;
    for (const auto& layer : scene)
    {
        if (numberOfLayers == 0)
        {
            // verify sky layer
            CHECK_EQUAL("sky", layer.getAlias());
            auto iGraphic = 0;
            for (const auto& graphic : layer)
            {
                if (iGraphic == 0)
                {
                    CHECK_EQUAL(VG::Point(0, 0), graphic.getPlacementPoint());
                    auto& vg = graphic.getGraphic();
                    CHECK_EQUAL(true, vg.isClosed());
                    CHECK_EQUAL(3, vg.getPointCount());
                    CHECK_EQUAL(VG::Point(1, 2), vg.getPoint(0));
                    CHECK_EQUAL(VG::Point(3, 4), vg.getPoint(1));
                    CHECK_EQUAL(VG::Point(5, 6), vg.getPoint(2));
                }
                else if (iGraphic == 1)
                {
                    CHECK_EQUAL(VG::Point(700, 0), graphic.getPlacementPoint());
                    auto& vg = graphic.getGraphic();
                    CHECK_EQUAL(false, vg.isClosed());
                }

                ++iGraphic;
            }

            CHECK_EQUAL(2, iGraphic);
        }
        else if (numberOfLayers == 1)
        {
            // verify mountains layer
            CHECK_EQUAL("mountains", layer.getAlias());

            auto numberOfGraphics = 0;
            for (const auto& graphic : layer)
            {
                ++numberOfGraphics;
            }

            CHECK_EQUAL(1, numberOfGraphics);
        }

        ++numberOfLayers;
    }

    // Expect 2 layers
    CHECK_EQUAL(2, numberOfLayers);
}
