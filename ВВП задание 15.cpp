#include <iostream>
using namespace std;
void powerA3(double a, double* b) {
	*b = a * a * a;
}
int Sign(double x) {
	if (x < 0) {
		return -1;
	}
	else if (x == 0) {
		return 0;
	}
	else if (x > 1) {
		return 1;
	}
}float RingS(float r1, float r2) {
	if (r1 > r2) {
		float S = 3.14 * (r1 * r1 - r2 * r2);
		return S;
	}
	else if (r2 > r1) {
		float S = 3.14 * (r2 * r2 - r1 * r1);
		return S;
	}
}
int Quarter(int x, int y) {
	if (x > 0 && y > 0) return 1;
	else if (x > 0 && y < 0) return 4;
	else if (x < 0 && y < 0) return 3;
	else if (x < 0 && y > 0) return 2;
}
double fact2(int N) {
	double ff = 1;
	for (; N > 1; N -= 2)
		ff *= N;
	return ff;
}

int main(void) {
	setlocale(LC_ALL, "rus");
	cout << "Задание 1\n Введите число А \n";
	for (int i = 0; i < 5; i++) {
		double a;
		cin >> a;
		double b;
		powerA3(a, &b);

		cout << a << " ^ 3 = " << b << endl;
	}

	cout << "Задание 2" << endl;
	cout << "Введите числa " << endl;
	int n, h;
	cin >> n >> h;
	cout << Sign(n) + Sign(h) << endl;

	cout << "Задание 3" << endl;
	cout << "Введите радиусы окружностей " << endl;
	float r1, r2;
	cin >> r1 >> r2;
	cout << "Площадь кольца между окружностями равна " << RingS(r1, r2) << endl;

	cout << "Задание 4" << endl;
	cout << "Введите координаты точки для определния ее местоположения " << endl;
	int x, y;
	cin >> x >> y;
	cout << "Точка находится в " << Quarter(x, y) << " четверти" << endl;

	cout << "Задание 5" << endl;
	cout << "Введите число для определения двойного факториала " << endl;
	int f;
	cin >> f;
	cout << fact2(f);
}