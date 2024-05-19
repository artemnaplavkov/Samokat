#pragma once
#include "point.h"
#include <fstream>

namespace abstracts {
	/*!
		\authors Наплавков Артем
		Абстракция, хранящая в себе информацию о складе: идентификатор, положение
		Коммуницирует с базами данных
	!*/
	struct Storage {
		int id;
		Point pos;
		
		void print();
		void input();
		void save(std::ofstream &os);
		void read(std::ifstream& is);
	};

}