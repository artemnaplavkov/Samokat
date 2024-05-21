#include "point.h"
#include <iostream>
#include<math.h>

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
	void Point::save(std::ofstream& os) {
		os << x << " " << y << " ";
	}
	void Point::read(std::ifstream& is) {
		is >> x >> y;
	}

	/*
	double Point::length(Point first,Point second) { 
		std::cout << pow(first.x - second.x, 2) << std::endl << pow(first.y - second.y, 2) << std::endl << sqrt(pow(first.x - second.x, 2) + pow(first.y - second.y, 2)) << std::endl;
		return (sqrt(pow(first.x - second.x, 2)+ pow(first.y - second.y, 2)));
	 }
	 */
}
