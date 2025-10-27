#include "app.h"
#include <algorithm>
#include <format>

namespace vsite::oop::v2
{
	// Constructors
	color::color() : red(0.0), green(0.0), blue(0.0) {}

	color::color(double r, double g, double b)
		: red(std::clamp(r, 0.0, 1.0)),
		green(std::clamp(g, 0.0, 1.0)),
		blue(std::clamp(b, 0.0, 1.0)) {
	}

	// Copy constructor
	color::color(const color& other) : red(other.red), green(other.green), blue(other.blue) {}

	// setters
	void color::set_red(double r) {
		red = std::clamp(r, 0.0, 1.0);
	}
	void color::set_green(double g) {
		green = std::clamp(g, 0.0, 1.0);
	}
	void color::set_blue(double b) {
		blue = std::clamp(b, 0.0, 1.0);
	}

	//getters
	double color::get_red() const { return red; }
	double color::get_green() const { return green; }
	double color::get_blue() const { return blue; }

	// other member functions
	uint32_t color::get_color_ref() const {
		uint8_t r = static_cast<uint8_t>(red * 255);
		uint8_t g = static_cast<uint8_t>(green * 255);
		uint8_t b = static_cast<uint8_t>(blue * 255);
		return RGB(r, g, b);
	}

	double color::get_luminance() const {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
	}

	std::string color::to_hex(int value) {
		return std::format("{:X}", value);
	}


} // namespace
