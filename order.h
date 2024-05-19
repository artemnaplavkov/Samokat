#pragma once
#include"point.h"
#include"storage.h"
#include<fstream>

namespace abstracts {
	/*!
		\authors �������� ������
		\brief ������ ���������, ������� ����� ��������� �����
	!*/
	enum class Condition {
		dontgot = 0,
		got = 1,
		finished = 2,
	};

	/*!
		\authors �������� ������
		\brief ����������, �������� � ���� ���������� � ������
		������ � ���� ���������� � ������: ����� �� ����������, ������������� ������, ���������, ���������, �������������
		�������� ��������� ���������/�������� ������, ������������� � ������ ������
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