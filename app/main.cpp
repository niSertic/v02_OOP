#include <iostream>
#include <format>
#include "app.h"

using namespace vsite::oop::v2;

int main()
{
	double r, g, b;

	std::cout << "\nEnter RGB values [0.0 - 1.0] :" << std::endl;
	std::cout << "Red: " << std::endl;
	std::cin >> r;
	std::cout << "Green: " << std::endl;
	std::cin >> g;
	std::cout << "Blue: " << std::endl;
	std::cin >> b;

	color color01 = color(r, g, b);
	std::cout << "\nColor RGB values:" << color::to_hex(color01.get_color_ref()) << std::endl;

}
