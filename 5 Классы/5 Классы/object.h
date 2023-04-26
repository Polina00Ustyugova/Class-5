#pragma once
#pragma once
#include <string>
#include <iostream>

class Object // абстрактный класс
{
public:
	Object() {};
	virtual ~Object() {};
	virtual void show() = 0; // Чисто вируальная функция
};