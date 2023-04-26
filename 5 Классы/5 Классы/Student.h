#pragma once
#include "Person.h"
#include "object.h"
//класс Student наследует класс Person
class Student : public Person // Ѕазовый класс
{
protected:
	int grade;
	string subject; 
public:
	void show();
	Student();//конструктор без параметров
	~Student();//деструктор
	Student(string, int, int, string);//конструктор с параметрами
	Student(const Student&);//конструктор копировани€
	int Get_grade() { return grade; }//модификатор
	string Get_subject() { return subject; }//модификатор
	void Set_grade(int);//селектор
	void Set_subject(string);//селектор
	void CheckGrade(); // ѕроверка оценки
	Student& operator=(const Student&);//операци€ присваивани€
	friend istream& operator>>(istream& in, Student& l);//операци€ ввода
	friend ostream& operator<<(ostream& out, const Student& l); //операци€ вывода

};
