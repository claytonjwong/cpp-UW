#pragma once
#include "Layer.h"

#include <list>

namespace Framework
{
    class Scene
    {
    private:
        using LayerCollection = std::list<Layer>;
        
    public:
        Scene(const int& width, const int& height);

		Scene(const Scene& other) = default;
		Scene(Scene&& other) = default;

		Scene& operator=(const Scene&) = default;
		Scene& operator=(Scene&&) = default;
        
        using LayerIterator = LayerCollection::const_iterator;

		template <class L> void pushBack(L&& layer)
		{
			myLayers.push_back(std::forward<L>(layer));
		}

        void remove(const Layer& layer);
        LayerIterator begin() const;
        LayerIterator end() const;
        
        int getWidth() const;
        int getHeight() const;
        
    private:
        LayerCollection myLayers;
        int myWidth;
        int myHeight;
    };
}
