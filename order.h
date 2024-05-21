#pragma once
#include"point.h"
#include"storage.h"
#include<fstream>

namespace abstracts {
	enum class Condition {
		dontgot = 0,
		got = 1,
		finished = 2,
	};

	class Order {
	private:
		int storage_id;
		Point _point;
		Condition _condition;
		int id;
	public:
		int GetStorageID();
		void SetStorageID(int storage);

		void SetCondition(Condition condition);
		int ID();

		Point GetPoint();
		int GetCondition();


		void input();
		void print();
		void save(std::ofstream& os);
		void read(std::ifstream& is);
	};
}