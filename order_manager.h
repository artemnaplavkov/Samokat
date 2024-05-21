#pragma once
#include"order.h"

namespace AbstractManagers
{
	class Order_Manager {
	public:
		static void SetCondition(abstracts::Order order, int condition_id);
	};
}