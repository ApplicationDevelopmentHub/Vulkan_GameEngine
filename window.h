#pragma once
#include<GLFW/glfw3.h>
#define GLFW_INCLUDE_VULKAN
#include <string>

namespace VGE {
	class Window {
	public:
		Window(int w, int h, std::string name);
		~Window();

		//clean up of resorces once they are used
		Window(const Window&) = delete; //prevents copying of instance of a class.
		Window &operator = (const Window&) = delete;

		bool shouldClose() {
			return glfwWindowShouldClose(window);
		}

	private:
		void initWIndow(); //initializes a glfw window, called in contructor in .cpp file.

		const int width; //window width 
		const int height; //width height
		std::string windowName; //window name
		
		GLFWwindow* window; //a pointer to a GLFW WIndow
	};
}