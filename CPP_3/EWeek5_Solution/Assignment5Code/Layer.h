#pragma once

#include "PlacedGraphic.h"
#include <list>
#include <string>

namespace Framework
{
    class Layer
    {
        using PlacedGraphicCollection = std::list<PlacedGraphic>;
        
    public:
        explicit Layer(std::string alias);
        
        using PlacedGraphicIterator = PlacedGraphicCollection::const_iterator;
        
        void pushBack(PlacedGraphic placedGraphic);
        void remove(const PlacedGraphic& placedGraphic);
        PlacedGraphicIterator begin() const;
        PlacedGraphicIterator end() const;
        
        std::string getAlias() const;
        
        bool operator==(const Layer& rhs) const;
        bool operator!=(const Layer& rhs) const;
        
    private:
        PlacedGraphicCollection myGraphics;
        std::string myAlias;
    };
}
