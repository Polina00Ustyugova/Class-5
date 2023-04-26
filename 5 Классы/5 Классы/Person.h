#pragma once
#include <string>
#include <iostream>
#include "object.h"
using namespace std;
class Person : public Object // Базовый класс
{
protected:
	string name;
	int age;
public:
	void show(); // Переопределение функции
	Person() // Конструктор без параметров
	{
		name = "NULL";
		age = 0;
	}
	virtual ~Person() {}; // Деструктор
	Person(string M, int C) // Конструктор с параметрами
	{
		name = M;
		age = C;
	}
	Person(const Person& P)// Конструктор копирования
	{
		name = P.name;
		age = P.age;
	}
	//селекторы
	string Get_name() { return name; }
	int Get_age() { return age; }
	//модификаторы
	void Set_name(string);
	void Set_age(int);
	//перегрузка операции присваивания
	Person& operator=(const Person&);
	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, Person& c);
	friend ostream& operator<<(ostream& out, const Person& l); //операция вывода
};
