#pragma once
#include "point.h"
#include <vector>
namespace abstracts {

	struct Storage {
		int id;
		Point pos;
		std::vector<int> courier_ids;
		std::vector<int> order_ids;
		
		void print();
		void input();
	};

}