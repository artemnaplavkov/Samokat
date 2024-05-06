#include "Order.h"
#include<iostream>

namespace abstracts {
	Order::Order(int ID=0)
	{ 
		_condition = Condition::dontgot; 
		_storage = new Storage();
		id = ID;
		std::cout << "Enter order point: " << endl;
		_point.input();
	} 
	Order::Order(Condition condition, Storage storage, int ID=0)
	{ 
		_condition = condition; 
		_storage = storage;
		id = ID;
		std::cout << "Enter order point: " << endl;
		_point.input();
	}

	int Order::GetCondition() { return static_cast<int>(_condition); }
	void Order::SetCondition(Condition condition) { _condition = condition; }

	Storage Order::GetStorage() { return _storage; }
	void Order::SetStorage(Storage storage) { _storage = storage; }

	Point Order::GetPoint() { return _point; }

	int Order::ID() { return id; }
}