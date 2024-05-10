#include "database_manager.h"

void DatabaseManager::save(std::vector<abstracts::Storage>& storages) {
	std::ofstream os(storage_file_name);
	for (int i = 0; i < storages.size(); i++) {
		storages[i].save(os);
		os << "\n";
	}
}
void DatabaseManager::read(std::vector<abstracts::Storage>& storages) {
	storages.clear();
	std::ifstream is(storage_file_name);
	while (not is.eof()) {
		abstracts::Storage storage;
		storage.read(is);
		if (is.good())
			storages.push_back(storage);
	}
}

void DatabaseManager::save(std::vector<abstracts::Courier>& couriers) {
	std::ofstream os(courier_file_name);
	for (int i = 0; i < couriers.size(); i++) {
		couriers[i].save(os);
		os << "\n";
	}
}
void DatabaseManager::read(std::vector<abstracts::Courier>& couriers) {
	couriers.clear();
	std::ifstream is(courier_file_name);
	while (not is.eof()) {
		abstracts::Courier courier;
		courier.read(is);
		if (is.good())
			couriers.push_back(courier);
	}
}

void DatabaseManager::save(std::vector<abstracts::Order>& orders) {
	std::ofstream os(order_file_name);
	for (int i = 0; i < orders.size(); i++) {
		orders[i].save(os);
		os << "\n";
	}
}
void DatabaseManager::read(std::vector<abstracts::Order>& orders) {
	orders.clear();
	std::ifstream is(order_file_name);
	while (not is.eof()) {
		abstracts::Order order;
		order.read(is);
		if (is.good())
			orders.push_back(order);
	}
}