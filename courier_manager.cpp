#include"courier_manager.h"
#include"storage.h"
#include"point.h"

namespace AbstractManagers {
	static float Courier_Manager::get_time(abstracts::Courier courier, abstracts::Storage storage) {
		return abstracts::Point.length(courier.pos, storage.pos)/courier.speed_kmh;
	}
}