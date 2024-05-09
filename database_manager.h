#pragma once
#include "storage.h"
#include "courier.h"
#include "order.h"
#include <vector>
#include <string>

struct DatabaseManager {
	std::string storage_file_name = "./storage.txt";
	std::string order_file_name = "./order.txt";
	std::string courier_file_name = "./courier.txt";

	void save(std::vector<abstracts::Storage> &storages);
	void read(std::vector<abstracts::Storage>& storages);

	void save(std::vector<abstracts::Courier>& courier);
	void read(std::vector<abstracts::Courier>& courier);

	void save(std::vector<abstracts::Order>& order);
	void read(std::vector<abstracts::Order>& order);
};