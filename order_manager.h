#pragma once
#include"order.h"

namespace AbstractManagers
{
	/*!
		\authors �������� ������
		�������� ������, ��������������� ��������� ������
	!*/
	class Order_Manager {
	public:
		static void SetCondition(abstracts::Order& order, int condition_id);
	};
}