#include "WindowComponent.h"


void TemplateMethod()
{
	Window	w;
	w.AddComponents( 5 );
	
	// call Draw on the window. It is the "algorithm" that will call the needed methods on the components.
	w.Draw();
}

