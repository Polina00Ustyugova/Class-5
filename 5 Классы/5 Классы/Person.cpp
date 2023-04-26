#include "Person.h"
#include <iostream>
using namespace std;
void Person::show()
{
	setlocale(0, "ru");
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
}
//модификаторы
void Person::Set_age(int C) {
	age = C;
}
void Person::Set_name(string M) {
	name = M;

}
//перегрузка операции присваивания
Person& Person::operator=(const Person&c) 
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//глобальная функция для ввода
istream& operator>>(istream& in, Person& c)
{
	setlocale(LC_ALL, "ru");
	cout << "\nВведите имя:"; in >> c.name;
	cout << "\nВведите возраст:"; in >> c.age;
	return in;
}
//глобальная функция для вывода
ostream& operator<<(ostream& out, const Person& c)
{
	setlocale(LC_ALL, "ru");
	out << "\nИмя : " << c.name;
	out << "\nВозраст : " << c.age;
	out << "\n";
	return out;
}