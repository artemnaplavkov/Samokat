#pragma once
#include"point.h"
#include"storage.h"

namespace abstracts {
	enum class Condition {
		dontgot = 0,
		got = 1,
		finished = 2,
	};

	class Order {
	private:
		Storage _storage;
		Point _point;
		Condition _condition;
		int id;
	public:
		Storage GetStorage();
		void SetStorage(Storage storage);

		void SetCondition(Condition condition);
		int ID();

		Point GetPoint();
		int GetCondition();


		void input();
		void print();
	};
}