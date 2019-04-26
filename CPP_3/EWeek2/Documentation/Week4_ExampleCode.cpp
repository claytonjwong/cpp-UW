// TestStuff.cpp : Defines the entry point for the console application.
//

#include "Tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
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

	XMLDocument myDoc;

	auto result = myDoc.Parse(TestXml.c_str());

	cout << "Parse result: " << result << endl;

	auto root = myDoc.RootElement();
	cout << "Root Name: " << root->Name() << endl;

	auto attr = root->FirstAttribute();
	int count{ 0 };
	while (attr != nullptr)
	{
		count++;
		cout << "Attr has name: " << attr->Name() << " and value: " << attr->Value() << endl;
		attr = attr->Next();
	}

	cout << "We had " << count << "attrs" << endl;

	auto layer = root->FirstChildElement();

	while (layer != nullptr)
	{
		cout << "Root's has a child " << layer->Name() << endl;
		layer = layer->NextSiblingElement();
	}
	// With the above we know how to iterate through a document from disk.

	//Now how do we write to a document?
	XMLDocument doc2;

	auto sceneElem = doc2.NewElement("Scene");

	sceneElem->SetAttribute("width", 1);
	sceneElem->SetText("Some text");
	doc2.InsertEndChild(sceneElem);

	doc2.SaveFile("output.xml");

	return 0;
}

