#pragma once
#include "courier.h"
#include "order.h"
#include "storage.h"
#include "order_manager.h"
#include <vector>

struct TimeManager{
	/*!
		\authors �������� ���������
		�������� �������, ����������� ����� ������ � ���������� ��������� ����� �������
	!*/
	void time_shift(float hours,
		std::vector<abstracts::Storage>* storages,
		std::vector<abstracts::Courier>* couriers,
		std::vector<abstracts::Order>* orders);
};