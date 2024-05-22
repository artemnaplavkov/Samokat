#include "time_manager.h"
#include <iostream>

void TimeManager::time_shift(float hours,
	std::vector<abstracts::Storage>* storages,
	std::vector<abstracts::Courier>* couriers,
	std::vector<abstracts::Order>* orders) {
	for (int i = 0; i < orders->size(); i++) {
		(*orders)[i].time_gone(hours);
		if ((*orders)[i].get_time() <= 0) {
			AbstractManagers::Order_Manager::SetCondition((*orders)[i], 2);
			for (int j = 0; j < couriers->size(); j++) {
				if ((*couriers)[j].current_order_id == (*orders)[i].ID()) {
					(*couriers)[j].set_order(-1);
					break;
				}
			}
		}
	}
}