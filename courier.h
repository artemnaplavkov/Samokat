#pragma once
#include "point.h"
#include "order.h"
#include <fstream>

namespace abstracts {
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
