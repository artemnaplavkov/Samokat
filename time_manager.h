#pragma once
#include "courier.h"
#include "order.h"
#include "storage.h"
#include <vector>
struct TimeManager{
	void time_shift(int hours,
		std::vector<abstracts::Storage>& storages,
		std::vector<abstracts::Courier>& couriers,
		std::vector<abstracts::Order>& orders);
};