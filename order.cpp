#include "Order.h"
#include<iostream>

using namespace std;

namespace abstracts {
	int Order::GetCondition() { return static_cast<int>(_condition); }
	void Order::SetCondition(Condition condition) { _condition = condition; }

	int Order::GetStorageID() { return storage_id; }
	void Order::SetStorageID(int storage) { storage_id = storage; }

	Point Order::GetPoint() { return _point; }

	int Order::ID() { return id; }

	void Order::print() {
		cout << "condition id: " << this->GetCondition() << endl;
		cout << "order id: " << id << endl;
		cout << "storage id: " << storage_id << endl;
		cout << "order position: " << endl << "x: " << _point.x << endl << "y: " << _point.y << endl;
	}
	void Order::input() {
		std::cout << "id=";
		std::cin >> id;
		std::cout << "storage_id=";
		std::cin >> storage_id;
		_condition = Condition::dontgot;
		_point.input();
	}
	void Order::save(std::ofstream& os) {
		os << id << " "
			<< storage_id << " "
			<< this->GetCondition() << " ";
		_point.save(os);
	}
	void Order::read(std::ifstream& is) {
		int cond_id;
		is >> id >> storage_id >> cond_id;
		SetCondition(static_cast<Condition>(cond_id));
		_point.read(is);
	}
}