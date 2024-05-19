#pragma once
#include"point.h"
#include"storage.h"
#include<fstream>

namespace abstracts {
	/*!
		\authors Соловьев Данила
		\brief Список состояний, которые может принимать заказ
	!*/
	enum class Condition {
		dontgot = 0,
		got = 1,
		finished = 2,
	};

	/*!
		\authors Соловьев Данила
		\brief Абстракция, хранящая в себе информацию о заказе
		Хранит в себе информацию о заказе: время до выполнения, идентификатор склада, положение, состояние, идентификатор
		Обладает функциями получения/загрузки данных, коммуницирует с базами данных
	!*/
	class Order {
	private:
		float time_to_complete;
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

		void set_time(float time);
		float get_time();
		void time_gone(float time);
	};
}