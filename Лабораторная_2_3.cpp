// Лабораторная_2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите возраст: ";
	cin >> a;
	if (a % 10 == 1) {
		cout << a << " год";
	}
	else if ((a == 13) || (a == 12)||(a == 14)) {
		cout << a << " лет";
	}
	else if ((a % 10 == 2) || (a % 10 == 3) || (a % 10 == 4)) {
		cout << a << " года";
	}
	else { cout << a << " лет"; }
	
}