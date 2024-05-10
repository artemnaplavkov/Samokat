#include "courier.h"
#include "order.h"
#include "storage.h"
#include "database_manager.h"
#include <iostream>
#include <vector>

int main() {
	std::vector<abstracts::Storage> storages;
	std::vector<abstracts::Courier> couriers;
	std::vector<abstracts::Order> orders;
	DatabaseManager database;


	int stop = 0;
	while (stop != 1) {
		std::cout
			<< "\n1-save"
			<< "\n2-read"
			<< "\n3-print storages"
			<< "\n4-add storage"
			<< "\n5-print couriers"
			<< "\n6-add courier"
			<< "\n7-print orders"
			<< "\n8-add order"
			<< "\n";
		int key;
		std::cin>>key;
		switch (key) {
		case 1:
			database.save(storages);
			database.save(couriers);
			database.save(orders);
			break;
		case 2:
			database.read(storages);
			database.read(couriers);
			database.read(orders);
			break;
		case 3:
			std::cout << "storages:\n";
			for (int i = 0; i < storages.size(); i++) {
				storages[i].print();
				std::cout << "\n";
			}
			break;
		case 4: {
			abstracts::Storage storage;
			storage.input();
			storages.push_back(storage);
			break;
		}
		case 5:
			std::cout << "couriers:\n";
			for (int i = 0; i < couriers.size(); i++) {
				couriers[i].print();
				std::cout << "\n";
			}
			break;
		case 6: {
			abstracts::Courier courier;
			courier.input();
			couriers.push_back(courier);
			break;
		}
		case 7:
			std::cout << "orders:\n";
			for (int i = 0; i < orders.size(); i++) {
				orders[i].print();
				std::cout << "\n";
			}
			break;
		case 8: {
			abstracts::Order order;
			order.input();
			orders.push_back(order);
			break;
		}
		default:
			std::cout <<"bye\n";
			stop = 1;
			break;
		}
	}
	return 0;
}
