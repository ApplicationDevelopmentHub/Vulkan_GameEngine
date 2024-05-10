#include "window.h"

namespace VGE {
	//assigns the mentioned values directly to the member variables of the header file.
	//we implement constructor here.
	Window::Window(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWIndow();
	}
	Window::~Window() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	//implement the initWindow() function that was defined in the header file.
	void Window::initWIndow() {
		glfwInit(); //init gflw library
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}