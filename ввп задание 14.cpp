#include <iostream>
using namespace std;

int fib(int n) {
    int f = 0;
    int res = 1;
    int f0 = 1;
    int i = 0;
    while (i <= n) {
        res = f;
        f = f0 + f;
        f0 = res;
        i++;
        if (n == f)
        {
            cout << "номер: ";
            return i;
        }
    }
    if (n == 0)
    {

        return 0;
    }
    else
    {
        cout << "ошибка ";
        return 404;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    cout << "задание 1" << endl;
    int a, b;
    cout << "Номер 1\n";
    cout << "Введите a и b ";
    cin >> a >> b;
    int i = a;
    cout << endl;
    for (i; i <= b; i++)
    {
        cout << endl;
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "номер 2" << endl;
    cout << "Введите числа a и b: " << endl;
    cin >> a >> b;
    i = 0;
    int g = a;
    while (a > b) {
        a -= b;
        i++;
    }
    cout << g - b * i << endl;

    cout << "задание 3" << endl;
    int N, k;
    cout << "введите N:\n";
    cin >> N;
    k = 1;
    i = 1;
    while (i < N)
    {
        k += 1;
        i += k;
    }
    cout << "Наименьшее к = " << k << endl << "Сумма равна: " << i << endl;
    cout << "\n__________________________\n";

    cout << "задание 4" << endl;
    cout << "введие процент вклада (от 0 до 25) " << endl;
    double p;
    cin >> p;
    double x = 1000;
    int i = 0;
    while (x <= 1100) {
        x += p / 100 * x;
        i++;
    }
    cout << i << " месяца \n" << "сумма " << x << endl;

    cout << "задание 5\n";
    long int A, B;
    cout << "Введите 2 числа: ";
    cin >> A >> B;
    while (A != B) {
        if (A > B)
            A = A - B;
        else
            B = B - A;
    }
    cout << "НОД этих чисел: " << A << endl;

    cout << "задание 6";
    cout << "\n введите число Фибоначчи для определения его порядкового номера ";
    int f;
    cin >> f;
    cout << fib(f);
}