#pragma once

#include <cstdint>
#include <string>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
	class color {

		double red, green, blue;

	public:
		color();
		color(double r, double g, double b);
		color(const color& other);

		void set_red(double r);
		void set_green(double g);
		void set_blue(double b);

		double get_red() const;
		double get_green() const;
		double get_blue() const;

		uint32_t get_color_ref() const;
		double get_luminance() const;

		static std::string to_hex(int value);
	};


}
