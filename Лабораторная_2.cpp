// Лабораторная_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, max, min;
	cout << "Введите значения a, b, c: ";
	cin >> a >> b >> c;
	max = a, min = a;
	if (a < b) {
		max = b;
	}
	if (b < a) {
		min = b;
	}
	if (c < b) {
		min = c;
	}
	if (c > b) {
		max = c;
	}
	cout << "Максимальное и минимальное значения равны " << max << " и " << min << " соответственно";
}