#include "point.h"
#include <iostream>
namespace abstracts {
	void Point::input() {
		std::cout << "x=";
		std::cin >> x;
		std::cout << "y=";
		std::cin >> y;
	}
	void Point::print() {
		std::cout << "x=" << x << "; " << "y=" << y<<"; ";
	}
}
