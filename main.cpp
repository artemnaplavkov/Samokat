#include "courier.h"
#include "order.h"
#include "storage.h"

#include <iostream>

int main() {
	std::vector<abstracts::Storage> storages;
	std::vector<abstracts::Courier> couriers;
	std::vector<abstracts::Order> orders;


	int stop = 0;
	while (stop != 1) {
		std::cout<<"1-print storages\n2-add storage\n";
		int key;
		std::cin>>key;
		switch (key) {
		case 1:
			std::cout << "storages:\n";
			for (int i = 0; i < storages.size(); i++) {
				storages[i].print();
				std::cout << "\n";
			}
			break;
		case 2: {
			abstracts::Storage storage;
			storage.input();
			storages.push_back(storage);
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
