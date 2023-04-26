#include "Student.h"
#include <iostream>
using namespace std;
void Student::show()
{
	setlocale(0, "ru");
	cout << "Имя: " << name << endl;
	cout << "Возраст: " << age << endl;
	cout << "Предмет: " << subject << endl;
	cout << "Оценка: " << grade << endl;
}
//конструктор без параметров
Student::Student() {
	grade = 0;
	subject = "";
}
//деструктор
Student::~Student() {}
//конструктор с параметрами
Student::Student(string M, int C, int G, string S) :Person(M, C) {
	grade = G;
	subject = S;
}
//конструктор копирования
Student::Student(const Student& L) {
	name = L.name;
	age = L.age;
	grade = L.grade;
	subject = L.subject;
}
//модификатор
void Student::Set_grade(int G) 
{
	grade = G;
}
void Student::Set_subject(string S)
{
	subject = S;
}
void Student::CheckGrade()
{
	setlocale(LC_ALL, "ru");
	if (grade < 3) cout << "Этот студент имеет неудовлетворительные оценки" << endl;
}
//оперция присваивания
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//операция ввода
istream& operator>>(istream& in, Student& l)
{
	setlocale(LC_ALL, "ru");
	cout << "\nИмя:"; in >> l.name;
	cout << "\nВозраст:"; in >> l.age;
	cout << "\nОценка:"; in >> l.grade;
	return in;
}
//операция вывода
ostream& operator<<(ostream& out, const Student& l)
{
	setlocale(LC_ALL, "ru");
	out << "\nИмя : " << l.name;
	out << "\nВозраст : " << l.age;
	out << "\nОценка : " << l.grade;
	out << "\n";
	return out;
}