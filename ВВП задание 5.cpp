#include <iostream>
#include <iso646.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double x1, x2, y1, y2, x3, y3, AB, a, b, c, ac, S, bc, sum, A, B, C;
	cout << "Задание 1 " << endl;
	cout << "  Введите координаты точек ((x1;y1), (x2;y2)) " << endl;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	AB = pow(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), 0.5);
	cout << "Расстояние между точками равно " << AB << endl;

	cout << "Задание 2 " << endl;
	cout << "  Введите координаты точек в порядке А, В, С" << endl;
	cin >> a >> b >> c;
	ac = abs(a - c);
	bc = abs(b - c);
	sum = ac + bc;
	cout << "AC=" << ac << "; BC=" << bc << "; сумма " << sum << endl;

	cout << "Задание 3 " << endl;
	cout << "  Введите координаты точки a " << endl;
	cin >> a;
	cout << " Введите координаты точки b " << endl;
	cin >> b;
	cout << " Введите координаты точки c " << endl;
	cin >> c;
	 if ((a < c)  and (c< b) or (a>c) and (c>b))
	 { 
		 double ac = abs(c - a);
		 double bc = abs(b - c);
		 cout << " Произведение длин отрезков ac и bc равно " << ac * bc << endl;
	 }
	 else
	 {
		 cout << "Точка С лежит вне отрезка AB" << endl;
	 }
	
	cout << "Задание 4 " << endl;
	cout << " Введите координаты вершин прямоугольника (x1;y1) (x2;y2)" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	double h, l;
	h = abs(x1 - x2);
	l = abs(y1 - y2);
	cout << "Периметр равен " << 2 * (h + l) << "; Площадь равна " << h * l << endl;

	cout << "Задание 5 " << endl;
	cout << " Введите координаты вершин треугольника (x1; y1) (x2; y2) (x3; y3)" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = pow(pow(y2 - y1, 2) + pow(x2 - x1, 2), 0.5);
	b = pow(pow(y2 - y3, 2) + pow(x2 - x3, 2), 0.5);
	c = pow(pow(y1 - y3, 2) + pow(x1 - x3, 2), 0.5);
	double P = a + b + c;
	double p = P / 2;
	S = pow((p * (p - a) * (p - b) * (p - c)), 0.5);
	if (S > 0)
	{
		cout << "Площадь треугольника равна " << S << "; Периметр треугольника равен " << P << endl;
	}
	else
	{
		cout << " Треугольник не может существовать " << endl;
	}
}