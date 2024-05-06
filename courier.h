#pragma once
#include "point.h"

namespace abstracts {
	struct Courier {
		int id;
		double speed_kmh;
		int current_order_id;
		Point pos;
	};
}
