#include"application.h"
namespace VGE {
	void FormationGE::run() {
		while (!initialWindow.shouldClose()) //should close is defined the window.h 
		{
			glfwPollEvents();
		}
	}
}