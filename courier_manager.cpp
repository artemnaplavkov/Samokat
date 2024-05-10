#include"courier_manager.h"

namespace AbstractManagers {
	float Courier_Manager::get_time(abstracts::Courier courier, abstracts::Storage storage) {
		return static_cast<float>(abstracts::Point::length(courier.pos, storage.pos)/courier.speed_kmh);
	}
}