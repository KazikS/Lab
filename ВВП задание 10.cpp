﻿#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << " Задание 1 " << endl;
	cout << " Введите числа А и В для определиния справедливости неравенств A>2 и B<=3 " << endl;
	 cin >> a >> b;
	if (a > 2 and b <= 3) {
		cout << " Оба неравенства верны " << endl;
	}
	else if (a > 2) {
		cout << " Верно только A>2 " << endl;
	}
	else if (b <= 3) {
		cout << " Верно только B<=3" << endl;
	}
	else {
		cout << " Оба неравенства неверны " << endl;
	}

	int c;
	cout << " Задание 2 " << endl;
	cout << " Введите числа A, B, C для определения справедливости неравенства A<B<C " << endl;
	cin >> a >> b>> c;
	if (a < b and b < c) {
		cout << " неравенство верное " << endl;
	}
	else {
		cout << " Неравенство неверно " << endl;
	}
	
	cout << " Задание 3 " << endl;
	cout << " Введите любое число для определения истинности высказывания «Данное число является четным двузначным» " << endl;
	cin >> a;
	if (a%2 == 0 and a>=10 and a<100 ) {
		cout << " Число удовлетворяет высказыванию " << endl;
	}
	else {
		cout << " Число неудовлетворяет высказыванию " << endl;
	}

	int p, v, t;
	cout << " Задание 4 " << endl;
	cout << " Введите трехзначное число " << endl;
	cin >> a;
	p = a / 100;
	v = a / 10 % 10;
	t = a % 10;
	if ((p < v) and (v < t)) {
		cout << " Цифры в числе образуют возростающую последовательность\n Высказывание истинно " << endl;
	}
	else if ((t<v) and (v<p)) {
		cout << " Цифры в числе образуют убывающую последовательность\n Высказыванние истинно " << endl;
	}
	else {
		cout << " Высказывание ложно, цифры в числе не образуют последовательности " << endl;
	}

	int ch, r;
	cout << " Задание 5 " << endl;
	cout << " Введите четырехзначное число " << endl;
	cin >> r;
	p = r / 1000;
	v = r / 100 % 10;
	t = r / 10 % 10;
	ch = r % 10;
	if ((p == ch) and (v == t)) {
		cout << " Число с обеих сторон читается одинаково\n Высказывание истинно" << endl;
	}
	else {
		cout << " Данное высказывание ложно " << endl;
	}

	cout << " Задание 6 " << endl;
	cout << " Введите стороны треугольника a, b, c для проверки треугольный он треугольник или нет " << endl;
	cin >> a >> b >> c;
	if (sqrt(pow(a, 2)) == sqrt(pow(b, 2) + pow(c, 2))) {
		cout << " Треугольник прямоугольный " << endl;
	}
	else if (sqrt(pow(b, 2)) == sqrt(pow(a, 2) + pow(c, 2))) {
		cout << " Треугольник прямоугольный " << endl;
	}
	else if (sqrt(pow(c, 2)) == sqrt(pow(b, 2) + pow(a, 2))) {
		cout << " Треугольник прямоугольный " << endl;
	}
	else {
		cout << " Треугольник не прямоугольный " << endl;
	}

	cout << " Задание 7 " << endl;
	cout << " Введите числа a, b, c для проверки существования треугольника с такими сторонами " << endl;
	cin >> a >> b >> c;
	if ((a < b + c) && (b<a+c) && (c<a+b)) {
		cout << " Треугольник существует " << endl;
	}
	else {
		cout << " Треугольник не существует " << endl;
	}
}