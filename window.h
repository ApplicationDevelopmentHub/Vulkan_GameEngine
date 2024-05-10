#pragma once
#include<GLFW/glfw3.h>
#define GLFW_INCLUDE_VULKAN
#include <string>

namespace VGE {
	class Window {
	private:
		void initWIndow(); //initializes a glfw window

		const int width; //window width 
		const int height; //width height
		std::string windowName; //window name
		
		GLFWwindow* window; //a pointer to a GLFW WIndow
	};
}