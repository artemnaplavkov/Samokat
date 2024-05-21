#include"courier_manager.h"

namespace AbstractManagers {
	float Courier_Manager::get_time(abstracts::Courier courier, abstracts::Order order) {
		return static_cast<float>(abstracts::Point::length(courier.pos, order.GetPoint())/courier.speed_kmh);
	}
}