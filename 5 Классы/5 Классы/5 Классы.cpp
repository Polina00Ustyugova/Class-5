#include <iostream>
#include "Person.h"
#include "Student.h"
#include "object.h"
#include "Vector.h"
#include "Windows.h"
using namespace std;
/*
void f1(Person& c)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	c.Set_name("Рома");
	cout << "Имя было изменено" << endl;
	cout << c;
}
Person f2()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student l("Антон", 18, 2, "Английский");
	return l;
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//работа с классом Person
	Person a;
	cin >> a;
	cout << "Вывод с помощью перегруженной функции: " << endl;
	cout << a;
	Object* p = &a;
	cout << "Вывод с помощью метода show(): " << endl;
	p->show();//вывод с помощью метода Show() и указателя
	Person b("Елена", 40);
	cout << b;
	a = b;
	cout << "Объекты скопированы" << endl;
	cout << a;
	//работа с классом Student
	Student c;
	cin >> c;
	//принцип подстановки
	f1(c);//передаем объект класса Student
	a = f2();//создаем в функции объект класса Student
	cout << a;
	cin >> c;
	c.CheckGrade();
}*/
void main()
{
	Vector v(5);//вектор из 5 элементов 
	Person a;//объект класса Person
	cin >> a;
	Object* p1 = &a;
	cout << "Вывод с помощью метода show(): " << endl;
	p1->show();//вывод с помощью метода Show() и указателя
	Student b;// объект класса Student 
	cin>>b;
	Object* p = &a;//ставим указатель на объект класса Person 
	v.Add(p);//добавляем объект в вектор
	p = &b;//ставим указатель на объект класса Student
	v.Add(p); //добавляем объект в вектор 
	cout << v;//вывод вектора
}