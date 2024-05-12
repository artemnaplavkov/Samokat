#pragma once
#include"courier.h"
#include"order.h"

namespace AbstractManagers {
	class Storage_manager {
	public:
		static void distribute_orders(abstracts::Courier* couriers, abstracts::Order* orders);
	};
}