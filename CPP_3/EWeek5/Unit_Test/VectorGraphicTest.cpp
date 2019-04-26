

#include "VectorGraphic.hpp"
#include "VectorGraphicStreamer.hpp"
#include "TestHarness.h"
#include "Point.hpp"
#include "Color.hpp"

using namespace std;

TEST(ctor, VectorGraphic)
{
    VG::VectorGraphic vg;
    CHECK_EQUAL(0, vg.getPointCount());
    CHECK_EQUAL(true, vg.isClosed());
    CHECK_EQUAL(false, vg.isOpen());
}


TEST(insertPoint, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point{1, 1});
    CHECK_EQUAL(1, vg.getPointCount());
    
    vg.addPoint(VG::Point{2, 2});
    CHECK_EQUAL(2, vg.getPointCount());
}


TEST(removePoint, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point{1, 1});
    vg.addPoint(VG::Point{2, 2});
    vg.removePoint(VG::Point{1, 1});
    
    CHECK_EQUAL(1, vg.getPointCount());
    CHECK_EQUAL(VG::Point(2, 2), vg.getPoint(0));
}

TEST(erasePoint, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point{1, 1});
    vg.addPoint(VG::Point{2, 2});
    vg.addPoint(VG::Point{3, 3});
    vg.erasePoint(1);
    
    CHECK_EQUAL(2, vg.getPointCount());
    CHECK_EQUAL(VG::Point(1, 1), vg.getPoint(0));
    CHECK_EQUAL(VG::Point(3, 3), vg.getPoint(1));
}

TEST(erasePointOutOfRange, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point{1, 1});
    vg.addPoint(VG::Point{2, 2});
    vg.addPoint(VG::Point{3, 3});
    
    try
    {
        vg.erasePoint(5);
    }
    catch (std::out_of_range&)
    {
        CHECK_EQUAL(3, vg.getPointCount());
        return;
    }
    CHECK(false); // should have caught exception
}

TEST(equality, VectorGraphic)
{
    VG::VectorGraphic vg1;
    vg1.addPoint(VG::Point{1, 1});
    vg1.addPoint(VG::Point{2, 2});
    vg1.addPoint(VG::Point{3, 3});
    
    VG::VectorGraphic vg2;
    vg2.addPoint(VG::Point{1, 1});
    vg2.addPoint(VG::Point{2, 2});
    vg2.addPoint(VG::Point{3, 3});
    
    CHECK(vg1 == vg2);
}

TEST(inequality, VectorGraphic)
{
    VG::VectorGraphic vg1;
    vg1.addPoint(VG::Point{1, 1});
    vg1.addPoint(VG::Point{1, 2});
    vg1.addPoint(VG::Point{1, 3});
    
    VG::VectorGraphic vg2;
    vg2.addPoint(VG::Point{2, 1});
    vg2.addPoint(VG::Point{2, 2});
    vg2.addPoint(VG::Point{2, 3});
    
    CHECK(vg1 != vg2);
    
    VG::VectorGraphic vg3;
    vg3.addPoint(VG::Point{1, 1});
    vg3.addPoint(VG::Point{1, 2});
    vg3.addPoint(VG::Point{1, 3});
    vg3.openShape();
    
    CHECK(vg3 != vg1);
}

TEST(closeShape, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.closeShape();
    CHECK_EQUAL(true, vg.isClosed());
    CHECK_EQUAL(false, vg.isOpen());
}

TEST(openShape, VectorGraphic)
{
    VG::VectorGraphic vg;
    vg.openShape();
    CHECK_EQUAL(false, vg.isClosed());
    CHECK_EQUAL(true, vg.isOpen());
}


TEST(widthHeight, VectorGraphic)
{
    VG::VectorGraphic vectorGraphic;
    vectorGraphic.addPoint(VG::Point{0, 2});
    vectorGraphic.addPoint(VG::Point{4, 3});
    vectorGraphic.addPoint(VG::Point{5, 8});
    vectorGraphic.addPoint(VG::Point{2, 1});
    CHECK_EQUAL(5, vectorGraphic.getWidth());
    CHECK_EQUAL(7, vectorGraphic.getHeight());
    
    vectorGraphic.erasePoint(2);
    CHECK_EQUAL(4, vectorGraphic.getWidth());
    CHECK_EQUAL(2, vectorGraphic.getHeight());
}


// C++11 has a new "raw string literal" that is useful for
// embedding long strings in a file for testing. Previously
// this would have to be done with a "stringification" macro:
//   #define STR(a) #a

const string VectorGraphicXml = R"(
<VectorGraphic closed="true">
<Point x="0" y="0"/>
<Point x="10" y="0">
</Point>
<Point x="10" y="10"/>
<Point x="0" y="10"/>
</VectorGraphic>
)";

TEST(fromXml, VectorGraphic)
{
    stringstream sstr(VectorGraphicXml);
    
    auto root = VG::VectorGraphicStreamer::getHandleFromStream( sstr );
    VG::VectorGraphic vg = VG::VectorGraphicStreamer::getVectorGraphicFromHandle( root );
    
    CHECK_EQUAL(true, vg.isClosed());
    CHECK_EQUAL(4, vg.getPointCount());
    CHECK_EQUAL(10, vg.getPoint(2).getX());
    CHECK_EQUAL(10, vg.getPoint(2).getY());
}

const string VectorGraphicXmlWithStroke = R"(
<VectorGraphic closed="true">
    <Stroke tip="square" size="7" color="112233" />
    <Point x="1" y="2"/>
    <Point x="3" y="4">
    </Point>
    <Point x="5" y="6"/>
    <Point x="7" y="8"/>
</VectorGraphic>
)";

TEST(fromXmlWithStroke, VectorGraphic)
{
    stringstream stream{ VectorGraphicXmlWithStroke };
    
    auto root = VG::VectorGraphicStreamer::getHandleFromStream( stream );
    VG::VectorGraphic vg = VG::VectorGraphicStreamer::getVectorGraphicFromHandle( root );
    
    CHECK_EQUAL(true, vg.isClosed());
    
    auto stroke = vg.getStroke();
    auto pen = stroke->createPen();
    
    CHECK_EQUAL(  BitmapGraphics::Color( 0x11, 0x22, 0x33 ),  pen->getColor()  );
    CHECK_EQUAL( 7, pen->getSize() );    
    
    CHECK_EQUAL(4, vg.getPointCount());
    
    CHECK_EQUAL(1, vg.getPoint(0).getX());
    CHECK_EQUAL(2, vg.getPoint(0).getY());
    
    CHECK_EQUAL(3, vg.getPoint(1).getX());
    CHECK_EQUAL(4, vg.getPoint(1).getY());

    CHECK_EQUAL(5, vg.getPoint(2).getX());
    CHECK_EQUAL(6, vg.getPoint(2).getY());

    CHECK_EQUAL(7, vg.getPoint(3).getX());
    CHECK_EQUAL(8, vg.getPoint(3).getY());

}

TEST(toXml, VectorGraphic)
{
    VG::VectorGraphic vg1;
    vg1.addPoint(VG::Point(1, 1));
    vg1.addPoint(VG::Point(2, 2));
    vg1.addPoint(VG::Point(3, 3));
    
    auto root = VG::VectorGraphicStreamer::getHandleFromVectorGraphic( vg1 );
    auto ss = VG::VectorGraphicStreamer::getStreamFromHandle( root );
    cout << ss.str() << endl;
    auto vg2 = VG::VectorGraphicStreamer::getVectorGraphicFromHandle( root );
    
    CHECK(vg1 == vg2);
}

TEST(copyCtor,VectorGraphic){
    
    VG::VectorGraphic vg1;
    VG::VectorGraphic vg2(vg1);
    CHECK(vg1==vg2);
}

TEST(assignment,VectorGraphic){
    
    VG::VectorGraphic vg1,vg2;
    vg2=vg1;
    CHECK(vg1==vg2);
}

TEST(getPoint,VectorGraphic){
    VG::VectorGraphic vg;
    vg.addPoint(VG::Point{10,10});
    vg.addPoint(VG::Point{100,100});
    vg.addPoint(VG::Point{1000,1000});
    CHECK(vg.getPointCount()==3);
    CHECK(vg.getPoint(0)==VG::Point(10,10));
    CHECK(vg.getPoint(1)==VG::Point(100,100));
    CHECK(vg.getPoint(2)==VG::Point(1000,1000));
}


