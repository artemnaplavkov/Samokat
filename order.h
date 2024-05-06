#pragma once
#include "point.h"

namespace abstracts {
	enum State {
		not_processed,
		in_progress,
		completed
	};
	struct Order {
		int id;
		Point target;
		int storage_id;
		State state;
	};
}