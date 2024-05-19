#pragma once
#include "point.h"
#include "order.h"
#include <fstream>

namespace abstracts {
	/*!
		\authors Наплавков Артем
		\brief Абстракция, хранящая в себе информацию о курьере
		Хранит в себе информацию о курьере: идентификатор, скорость, идентификатор склада и текущего заказа, позиция
		Может выводить, загружать обьекты класса и коммуницироввать с базами банных
	!*/
	struct Courier {
		int id;
		double speed_kmh;
		int storage_id;
		int current_order_id;
		Point pos;

		void print();
		void input();
		void save(std::ofstream& os);
		void read(std::ifstream& is);
		void set_order(abstracts::Order* order);
		void set_order(int order_id);
		void set_point(Point point);
		int get_order();
	};
}
