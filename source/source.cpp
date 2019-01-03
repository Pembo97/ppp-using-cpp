#include "../lib/Graph.h"
#include "../lib/Simple_window.h"

int main()
{
	using namespace Graph_lib;
	
	Point tl(150, 150);
	Simple_window win(tl, 600, 400, "My window");
	win.wait_for_button();
}
