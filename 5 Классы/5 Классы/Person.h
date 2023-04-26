#pragma once
#include <string>
#include <iostream>
#include "object.h"
using namespace std;
class Person : public Object // ������� �����
{
protected:
	string name;
	int age;
public:
	void show(); // ��������������� �������
	Person() // ����������� ��� ����������
	{
		name = "NULL";
		age = 0;
	}
	virtual ~Person() {}; // ����������
	Person(string M, int C) // ����������� � �����������
	{
		name = M;
		age = C;
	}
	Person(const Person& P)// ����������� �����������
	{
		name = P.name;
		age = P.age;
	}
	//���������
	string Get_name() { return name; }
	int Get_age() { return age; }
	//������������
	void Set_name(string);
	void Set_age(int);
	//���������� �������� ������������
	Person& operator=(const Person&);
	//���������� ���������-������� �����-������
	friend istream& operator>>(istream& in, Person& c);
	friend ostream& operator<<(ostream& out, const Person& l); //�������� ������
};
