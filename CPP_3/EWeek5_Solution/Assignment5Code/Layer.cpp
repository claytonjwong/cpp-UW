#include "Layer.h"
#include <utility>

namespace Framework
{
    Layer::Layer(std::string alias) :
        myAlias(std::move(alias))
    {
    }

    void Layer::pushBack(PlacedGraphic placedGraphic)
    {
        myGraphics.push_back(std::move(placedGraphic));
    }

    void Layer::remove(const PlacedGraphic& placedGraphic)
    {
        myGraphics.remove(placedGraphic);
    }

    Layer::PlacedGraphicIterator Layer::begin() const
    {
        return myGraphics.begin();
    }

    Layer::PlacedGraphicIterator Layer::end() const
    {
        return myGraphics.end();
    }

    std::string Layer::getAlias() const
    {
        return myAlias;
    }

    bool Layer::operator==(const Layer& rhs) const
    {
        return myAlias == rhs.myAlias && myGraphics == rhs.myGraphics;
    }

    bool Layer::operator!=(const Layer& rhs) const
    {
        return !operator==(rhs);
    }
}
