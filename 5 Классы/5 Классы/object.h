#pragma once
#pragma once
#include <string>
#include <iostream>

class Object // ����������� �����
{
public:
	Object() {};
	virtual ~Object() {};
	virtual void show() = 0; // ����� ���������� �������
};