#include "WindowComponent.h"
#include <memory>

void Prototype()
{
	Window	w;
	w.AddComponents( 5 );

	// Add more components
	// ...
	// We dont know what sort and how many components are inside the window w

	// We want to create a copy of this window
	//std::shared_ptr<Window> wSCopy (w.ShallowCopy());    // Bug: shallow copy, will be deleted at end of scope.

	std::shared_ptr<Window> wDCopy (w.DeepCopy());
	
	//wSCopy->Draw();
	wDCopy->Draw();

	// ....
	// use the copies

	// the Window copies will be deleted when shared_ptr goes out of scope.
}

