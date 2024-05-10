#include"order_manager.h"

namespace AbstractManagers {
	static void Order_Manager::SetCondition(abstracts::Order order, int id) {
		order.SetCondition(static_cast<abstracts::Condition>(id));
	}
}