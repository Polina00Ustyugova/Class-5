#include "Person.h"
#include <iostream>
using namespace std;
void Person::show()
{
	setlocale(0, "ru");
	cout << "���: " << name << endl;
	cout << "�������: " << age << endl;
}
//������������
void Person::Set_age(int C) {
	age = C;
}
void Person::Set_name(string M) {
	name = M;

}
//���������� �������� ������������
Person& Person::operator=(const Person&c) 
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//���������� ������� ��� �����
istream& operator>>(istream& in, Person& c)
{
	setlocale(LC_ALL, "ru");
	cout << "\n������� ���:"; in >> c.name;
	cout << "\n������� �������:"; in >> c.age;
	return in;
}
//���������� ������� ��� ������
ostream& operator<<(ostream& out, const Person& c)
{
	setlocale(LC_ALL, "ru");
	out << "\n��� : " << c.name;
	out << "\n������� : " << c.age;
	out << "\n";
	return out;
}