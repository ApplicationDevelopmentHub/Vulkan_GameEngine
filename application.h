#pragma once
#include"window.h"
namespace VGE {
	class FormationGE {
	public:
		static constexpr int WIDTH = 1800;
		static constexpr int HEIGHT = 900;

		void run();

	private:
		//Create a window object using constructor
		Window initialWindow{ WIDTH, HEIGHT, "Initial Window FormationGE" };
	};
}