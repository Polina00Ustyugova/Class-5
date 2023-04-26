#include "Student.h"
#include <iostream>
using namespace std;
void Student::show()
{
	setlocale(0, "ru");
	cout << "���: " << name << endl;
	cout << "�������: " << age << endl;
	cout << "�������: " << subject << endl;
	cout << "������: " << grade << endl;
}
//����������� ��� ����������
Student::Student() {
	grade = 0;
	subject = "";
}
//����������
Student::~Student() {}
//����������� � �����������
Student::Student(string M, int C, int G, string S) :Person(M, C) {
	grade = G;
	subject = S;
}
//����������� �����������
Student::Student(const Student& L) {
	name = L.name;
	age = L.age;
	grade = L.grade;
	subject = L.subject;
}
//�����������
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
	if (grade < 3) cout << "���� ������� ����� �������������������� ������" << endl;
}
//������� ������������
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//�������� �����
istream& operator>>(istream& in, Student& l)
{
	setlocale(LC_ALL, "ru");
	cout << "\n���:"; in >> l.name;
	cout << "\n�������:"; in >> l.age;
	cout << "\n������:"; in >> l.grade;
	return in;
}
//�������� ������
ostream& operator<<(ostream& out, const Student& l)
{
	setlocale(LC_ALL, "ru");
	out << "\n��� : " << l.name;
	out << "\n������� : " << l.age;
	out << "\n������ : " << l.grade;
	out << "\n";
	return out;
}