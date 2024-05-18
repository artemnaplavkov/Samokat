#pragma once
#include"courier.h"
#include"order.h"
#include"point.h"

namespace AbstractManagers {
	class Courier_Manager {
	public:
		static float get_time(abstracts::Courier courier, abstracts::Order order);
	};
}