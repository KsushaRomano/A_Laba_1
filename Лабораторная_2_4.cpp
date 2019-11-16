// Лабораторная_2_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <Math.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL,"Russian"); 
	float a, b, c, x, d, x1, x2;
	cout << "Введите значения a, b, c: ";
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Множество решений";
			}
			else {
				cout << "Нет решения";
			}
		}
		else {
			x = -c / b;
			cout << "Корень равен " << x;
		}
	}
	else { d = b * b - 4 * a * c;
	if (d >= 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	cout << "Корни уравнений равны " << x1 << " и " << x2 << " соответственно";
	}
	else { cout << "Комплексный числа"; }
	}

}