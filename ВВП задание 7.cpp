#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a;
	const double pi = 3.14;
	cout << " Задание 1 " << endl;
	cout << " Введите угол от 0 до 360 градусов " << endl;
	cin >> a;
	if ((a > 0) and (a < 360))
	{
		a = pi * a / 180;
		cout << a << endl;
	}
	else
	{
		cout << " Значение не удовлетворяет условию " << endl;
	}

	cout << " Задание 2 " << endl;
	cout << " Введите значение угла в радианах от 0 до 2 * pi  " << endl;
	cin >> a;
	if ((a > 0) and (a < 2 * pi))
	{
		a = a * 180 / pi;
		cout << a << endl;
	}
	else
	{
		cout << "Значение угла не удовлетворяет условию" << endl;
		
	}

	double X, Y, A;
	cout << " Задание 3 " << endl;
	cout << " Введите колличество килограммов конфет " << endl;
	cin >> X;
	cout << " Введиту цену за " << X << " килограммов " << endl;
	cin >> A;
	cout << " 1 килограмм конфет стоит " << A / X << " рублей " << endl;
	cout << " Введите требуемое количество килограмм конфет " << endl;
	cin >> Y;
	cout << Y << " килограмм конфет стоит " << Y * (A / X) << " рублей " << endl;

	double v1, v2, s, t, v;
	cout << " Задание 4 " << endl;
	cout << " Введите скорости автомобилей V1 и V2 в км/ч " << endl;
	cin >> v1 >> v2;
	cout << " Введите расстояние между ними в км " << endl;
	cin >> s;
	cout << " Введите время T(ч), через которое требуется рассчитать расстояние между ними " << endl;
	cin >> t;
	v = abs(v1 + v2);
	cout << " Скорость сближения равна " << v << "км/ч" << endl;
	s = v / t;
	cout << " Через время " << t << " часов расстояние между автомобилями будет равно " << s << " километров " << endl;

	double aa, b, x;
	cout << " Задание 5" << endl;
	cout << " Введите коэффициенты А и В (А не равно 0) для решения уравнения А * х - В = 0 " << endl;
	cin >> aa >> b;
	if ((aa > 0) or (aa < 0))
	{
		x = b / aa;
		cout << " Х равен " << x << endl;
	}
	else
	{
		cout << " не удовлетворяет условию А не равно 0 " << endl;
	}

	double a1, a2, b1, b2, det, det1, det2, c1, c2, xx, y;
	cout << " Задание 6 " << endl;
	cout << " Введите коэффициенты А1, В1, А2, В2, C1, C2 для решения системы уравнений " << endl;
	cout << " A1·x + B1·y = C1 " << endl;
	cout << " A2·x + B2·y = C2 " << endl;
	cin >> a1 >> b1 >> a2 >> b2 >> c1 >> c2;
	det = (a1 * b2) - (b1 * a2);
	det1 = (c1 * b2) - (c2 * b1);
	det2 = (a1 * c2) - (c1 * a2);
	xx = det1 / det;
	y = det2 / det;
	cout << " x = " << xx << "  y = " << y << endl;
}