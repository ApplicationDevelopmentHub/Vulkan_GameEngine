#include"application.h"
#include<cstdlib>
#include<iostream>
#include<stdexcept>
using namespace VGE;
int main() {
	FormationGE gameEngine{};
	try
	{
		gameEngine.run();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}