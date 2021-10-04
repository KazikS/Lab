#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "rus");
	double a, b, c;
	cout << " Первое задание " << endl;
	cout << " Введите значения переменных а и b " << endl;
	cin >> a >> b;
	swap(a, b);
	cout << "Данные переменных поменяны местами: " << a << " " << b << endl;

	cout << "второе задание" << endl;
	cout << "Введите числа a, b, c " << endl;
	cin >> a >> b >> c; 
	swap(a, c);
	swap(a, b);
	cout << a << " " << b << " " << c << endl;

	double x, y;
	cout << " Задание 4 " << endl;
	cout << "Введите значение Х для вычисления выражения y = 3x^6 - 6x^2 - 7" << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << " Ответ: " << y << endl;
	
	cout << " Задание 5 " << endl;
	cout << "Введите значение Х для вычисления выражения y = 4(x-3)^6 - 7(x-3)^3 + 2 " << endl;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "Ответ: " << y << endl;

	double s, d, f, g;
	cout << "Задание 6" << endl;
	cout << "Введите число a для возведения его в 8 степень " << endl;
	cin >> a;
	s = a * a ;
	d = s * s;
	f = d * d;
	cout << "Ответ: " << f << endl;
;
	cout << "Задание 7" << endl;
	cout << "Введите число а для вовзедения его в 15 степень " << endl;
	cin >> a;
	s = a * a;
	d = s * a;
	f = d * s;
	g = f * f * f;
	cout << "Ответ: " << g << endl;
}
