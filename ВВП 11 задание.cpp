#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << " Задание 1\n Введите два числа A и B целого типа:  " << endl;
	cin >> a >> b;
	if (a > b) {
		b = a;
		cout << " B= " << b << " A= " << a << endl;
	}
	else if (b>a) {
		a = b;
		cout << " B= " << b << " A= " << a << endl;
	}
	else {
		a = 0;
		b = 0;
		cout << " B= " << b << " A= " << a << endl;
	}

	int c;
	cout << " Задание 2\n Введите три числа " << endl;
	cin >> a >> b >> c;
	if ((a < b) && (a < c)) {
		cout << " Сумма наибльших значений равна  " << b + c << endl;
	}
	else if ((b < a) && (b < c)) {
		cout << " Сумма наибльших значений равна  " << a + c << endl;
	}
	else {
		cout << " Сумма наибльших значений равна  " << b + a << endl;
	}

	cout << " Задание 3\n Введите координаты точек A, B, C соответственно " << endl;
	double xa, ya, xb, yb, xc, yc, ac, ab;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	ac = sqrt(pow(xc - xa, 2) + pow(ya - yc, 2));
	ab = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	if (ac > ab) {
		cout << " Точка С ближе, расстояник равно " << ac << endl;
	}
	else {
		cout << " Точка B ближе, расстояник равно " << ab << endl;
	}

	cout << " Задание 4\n Введите координаты точки, не лежащих на осях ОХ и ОУ " << endl;
	double x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << " Точка лежит в 1 четверти " << endl;
	}
	else if (x > 0 && y < 0) {
		cout << " Точка лежит во 2 четверти " << endl;
	}
	else if (x < 0 && y < 0) {
		cout << " Точка лежит в 3 четверти " << endl;
	}
	else {
		cout << " Точка лежит в 4 четверти " << endl;
	}

	int g;
	cout << " Задание 5\n Введите любое число ";
	cin >> g;
	if (g > 0 && g%2==0) {
		cout << " Число четное положительное " << endl;
	}
	else if (g > 0 && g % 2 != 0) {
		cout << " Число нечетное положительное " << endl;
	}
	else if (g < 0 && g % 2 == 0) {
		cout << " Число четное отрицательное " << endl;
	}
	else if (g < 0 && g % 2 != 0) {
		cout << " Число нечетное отрицательное " << endl;
	}
	else if (g == 0) {
		cout << " Число нулевое " << endl;
	}

	cout << " Задание 6\n Введите число, находящееся в диапазоне от 1 до 999 ";
	cin >> g;
	if (g >= 1 && g <= 9) {
		if (g % 2 == 0) {
			cout << " Число четное однозначное " << endl;
		}
		else {
			cout << " Число нечетное однозначное" << endl;
		}
	}if (g >= 10 && g <= 99) {
		if (g % 2 == 0) {
			cout << " Число четное двузначное " << endl;
		}
		else {
			cout << " Число нечетное двузначное " << endl;
		}
	}if (g >= 100 && g <= 999) {
		if (g % 2 == 0) {
			cout << " Число четное трехзначное " << endl;
		}
		else {
			cout << " Число нечетное трехзначное " << endl;
		}
	}
	return 0;
} 