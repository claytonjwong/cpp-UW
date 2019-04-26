
#include "Parse.hpp"
#include "TestHarness.h"

using namespace std;
using namespace VG;

TEST(trimBeginning, Parse)
{
    string actual{"  \tHello"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEnd, Parse)
{
    string actual{"Hello  \n\n\n\t"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimBeginningAndEnd, Parse)
{
    string actual{"  Hello\n\t"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimNone, Parse)
{
    string actual{"Hello"};
    Parse::trim(actual);
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEmpty, Parse)
{
    string actual;
    Parse::trim(actual);
    
    CHECK_EQUAL("", actual);
}

TEST(trimDefaultWhitespace, Parse)
{
    string actual{"   Hello\t\n   "};
    Parse::trim(actual);
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEverything, Parse)
{
    string actual{"Hello 1234"};
    string trimmables{"Hello 0123456789"};
    Parse::trim(actual, trimmables);
    
    CHECK_EQUAL("", actual);
}

TEST(eatNothing, Parse)
{
    istringstream stream{"Hello"};
    Parse::eat(stream, "123456789");
    
    ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomething, Parse)
{
    istringstream stream{"4320Hello"};
    Parse::eat(stream, "1234567890");
    
    ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomeLeadingWhitespace, Parse)
{
    istringstream stream{"   I had leading whitespace"};
    Parse::eat(stream);
    
    ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("I had leading whitespace", actual.str());
}

TEST(tokenize,Parse){
    string element="<VectorGraphic closed=\"true\">";
    auto tok=Parse::tokenize(element);
    CHECK(tok.orig==element);
    CHECK(tok.name=="VectorGraphic");
}

TEST(to_keyval,Parse){
    string attribute="this=\"that\"";
    auto res=Parse::to_keyval(attribute);
    CHECK(res.first=="this");
    CHECK(res.second=="that");
}

TEST(process_token1,Parse){
    string element="<VectorGraphic closed=\"true\">";
    auto tok=Parse::tokenize(element);
    VectorGraphic vg;
    Parse::process_token(vg, tok);
    CHECK(vg.isClosed());
    CHECK(!vg.isOpen());
    CHECK(vg.getPointCount()==0);
}

TEST(process_token2,Parse){
    string vg_element="<VectorGraphic closed=\"false\">";
    auto tok=Parse::tokenize(vg_element);
    VectorGraphic vg;
    Parse::process_token(vg, tok);
    string pt_element="<Point x=\"13\" y=\"21\">";
    tok=Parse::tokenize(pt_element);
    auto attrX=Parse::to_keyval(tok.attributes[0]);
    auto attrY=Parse::to_keyval(tok.attributes[1]);
    CHECK(attrX.second=="13");
    CHECK(attrY.second=="21");
    vg.addPoint(VG::Point{stoi(attrX.second),stoi(attrY.second)});
    CHECK(!vg.isClosed());
    CHECK(vg.isOpen());
    CHECK(vg.getPointCount()==1);
}

TEST(invalid_closed_spelling,Parse){
    string vg_element="<VectorGraphic closde=\"false\">"; // ignore "closde", no need to over design parser
    auto tok=Parse::tokenize(vg_element);
    VectorGraphic vg;
    Parse::process_token(vg, tok);
}

TEST(invalid_order_coords,Parse){
    string pt_element="<Point y=\"13\" x=\"21\">"; // assume x comes first, no need to over design parser
    VectorGraphic vg;
    auto tok=Parse::tokenize(pt_element);
    Parse::process_token(vg, tok);
    auto attrX=Parse::to_keyval(tok.attributes[0]);
    auto attrY=Parse::to_keyval(tok.attributes[1]);
    CHECK(attrX.second=="13");
    CHECK(attrY.second=="21");
    vg.addPoint(VG::Point{stoi(attrX.second),stoi(attrY.second)});
    CHECK(vg.getPoint(0).getX()==13);
    CHECK(vg.getPoint(0).getY()==21);
}

TEST(invalid_x_y_spelling,Parse){
    string pt_element="<Point foo=\"13\" bar=\"21\">"; // assume x comes first, no need to over design parser
    VectorGraphic vg;
    auto tok=Parse::tokenize(pt_element);
    Parse::process_token(vg, tok);
    auto attrX=Parse::to_keyval(tok.attributes[0]);
    auto attrY=Parse::to_keyval(tok.attributes[1]);
    CHECK(attrX.second=="13");
    CHECK(attrY.second=="21");
    vg.addPoint(VG::Point{stoi(attrX.second),stoi(attrY.second)});
    CHECK(vg.getPoint(0).getX()==13);
    CHECK(vg.getPoint(0).getY()==21);
}
