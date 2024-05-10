#include "Order.h"
#include<iostream>

namespace abstracts {
	int Order::GetCondition() { return static_cast<int>(_condition); }
	void Order::SetCondition(Condition condition) { _condition = condition; }

	Storage Order::GetStorage() { return _storage; }
	void Order::SetStorage(Storage storage) { _storage = storage; }

	Point Order::GetPoint() { return _point; }

	int Order::ID() { return id; }

	void Order::print() {
		cout << "condition id: " << this.GetCondition() << endl;
		cout << "order id: " << id << endl;
		cout << "storage id: " << _storage.id << endl;
		cout << "order position: " << endl << "x: " << _point.x << endl << "y: " << _point.y << endl;
	}
	void Order::input() {
		std::cout << "id=";
		std::cin >> id;
		std::cout << "storage_id=";
		std::cin >> storage_id;
		_condition = Condition::dontgot;
		target.input();
	}
}