#include"storage_manager.h"

namespace AbstractManagers {

	void Storage_manager::distribute_orders(abstracts::Courier* couriers, abstracts::Order* orders) {
		for (int i = 0; i < sizeof(orders) / sizeof(*orders); i++) {
			for (int j = 0; j < sizeof(orders) / sizeof(*orders); j++) {
				if (couriers[j].get_order() == -1) {
					orders[i].SetCondition(static_cast<abstracts::Condition>(1));
					couriers[j].set_order(orders[i].ID());
					break;
				}
			}
			if (orders[i].GetCondition() < 1)
				break;
		}
	}
}