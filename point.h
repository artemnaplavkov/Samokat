#pragma once
#include <fstream>

namespace abstracts {
	/*!
		\authors Кукош Таисия
		\brief Абстракция, хранящая себе информацию о точке
		Хранит в себе положение по осям х и у, коммуницирует с базами данных
	!*/
	struct Point {
		double x;
		double y;
		void input();
		void print();
		void save(std::ofstream& os);
		void read(std::ifstream& is);
	};
}