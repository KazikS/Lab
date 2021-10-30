#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x;
	cout << " Задание 1" << endl;
	cout << " Введите объем файла в байтах. Программа переведет его в килобайты " << endl;
	cin >> x;
	x = x / 1024;
	cout << x << endl;

	double a, b;
	cout << " Задание 2 " << endl;
	cout << " Введите длины отрезков А и В (A>B) " << endl;
	int c;
label:
	cin >> a >> b;
	if (a > b) {
		c = a / b;
		cout << " На отрезке А без наложений поместится " << c << " отрезка(-ов) В " << endl;
	}
	else
	{
		cout << " Числа неудовлетворяют условию, попробуйте еще раз" << endl;
		goto label;
	}
	cout << " Задание 3 " << endl;
	cout << " Введите длины отрезков А и В (А>B) " << endl;
reapet:
	cin >> a >> b;
	c = a / b;
	if (a > b) {

		cout << " На отрезке А лежит " << c << " отрезка(-ов) В " << endl;
		a = a - (c * b);
		cout << " Hезанятое место на отрезке А " << a << endl;
	}
	else
	{
		cout << " Числа неудовлетворяют условию, попробуйте еще раз " << endl;
		goto reapet;
	}

	int ch, y, z;
	cout << " Задание 4 " << endl;
	cout << " Введите двухзначное число \n";
	cin >> ch;
	y = ch / 10;
	z = ch % 10;
	ch = z * 10 + y;
	cout << ch;

	int q, w, e;
	cout << " Задание 5 \n";
	cout << " Введите трехзначное число \n";
	cin >> q;
	w = q % 100;//последние 2 числа
	e = q / 100;//первое число
	q = w * 10 + e;
	cout << " После того как зачеркнули первую цифру слева и приписали ее справа получилось число " << q << endl;
}