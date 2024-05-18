#pragma once
#include"courier.h"
#include"order.h"
#include<vector>

namespace AbstractManagers {
	class Storage_manager {
	public:
		static void distribute_orders(std::vector<abstracts::Courier>* couriers, std::vector<abstracts::Order>* orders);
	};
}