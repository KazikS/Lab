#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Задание 1\n Введите цену одного кг конфет\n";
	int a;
	cin >> a;
	for (double i = 0; i <= 1; i += 0.1) {
		cout << i * a << " рублей стоит " << i << " кг конфет " << endl;
	}
	
	cout << " Задание 2\n Введите количество множителей " << endl;
	int n;
	cin >> n;
	double c = 1;
	for (int i = 0; i <= n; i++) {
		c = c * (1 + 0.1 * i);
	}
	cout << c << endl;

	cout << " Задание 3 \n Введите число N \n";
	int b;
	cin >> b;
	double e = 0;
	for (int i = 1; i <= b*2-1; i+=2) {
		e += i;
		cout << e << endl;
	}

	cout << " Задание 4\n Введите А и N\n ";
	int r, t;
	cin >> r >> t;
	double  h = 1;
	for (int i = 1; i <= t; i++) {
		h = h + pow(r, i);
	}
	cout << h << endl;

	cout << "Задание 5\n Введите числа А и N\n";
	cin >> a >> n;
	h = 1;
	for (int i = 1; i <= n; i++) {
		h = h + pow(-a, i);
	}
	cout << h;
	return 0;
}