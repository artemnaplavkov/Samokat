#include"storage_manager.h"

namespace AbstractManagers {

	Storage_manager::distribute_orders(abstracts::Courier[] couriers, abstracts::Order[] orders) {
		for (int i = 0; i < orders.Length; i++) {
			for (int j = 0; j < couriers.Length; j++) {
				if (couriers[j].get_order() == -1) {
					orders[i].SetCondition(1);
					couriers[j].set_order(orders[i].ID());
					break;
				}
			}
			if (orders[i].GetCondition() < 1)
				break;
		}
	}
}