// Lab_03_1.cpp
// < Соловей Катерина >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 18
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 13.5 - 2 * x;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = exp(0.4 + x);
	if (x > -1 && x < 1)
		B = 1 - sin(x) * sin(x);
	if (x >= 1)
		B = cos(x) / (1 + sin(x) * sin(x));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = exp(0.4 + x);
	else
		if (x > -1 && x < 1)
			B = 1 - sin(x) * sin(x);
		else
			B = cos(x) / (1 + sin(x) * sin(x));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}