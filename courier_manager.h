#pragma once
#include"courier.h"
#include"storage.h"
#include"point.h"

namespace AbstractManagers {
	class Courier_Manager {
	public:
		static float get_time(abstracts::Courier courier, abstracts::Storage storage);
	};
}