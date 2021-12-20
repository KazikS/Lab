#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "Задание 1 \n Введите целое число от 1 до 31 и целое число от 1 до 12 для определения дня имесяца года " << endl;
	cin >> a >> b;
	if (a <= 9) {
		if (a == 1)
			cout << " первое ";
		else if (a == 2)
			cout << " второе ";
		else if (a == 3)
			cout << " третье ";
		else if (a == 4)
			cout << " четвертое ";
		else if (a == 5)
			cout << " пятое ";
		else if (a == 6)
			cout << " шестое ";
		else if (a == 7)
			cout << " седьмое ";
		else if (a == 8)
			cout << " восьмое ";
		else if (a == 9)
			cout << " девятое ";
	}
	else if (a >= 10 && a <= 31) {
		if (a == 10)
			cout << " десятое ";
		else if (a == 11)
			cout << " одиннадцатое ";
		else if (a == 12)
			cout << " двенадцатое ";
		else if (a == 13)
			cout << " тринадцатое ";
		else if (a == 14)
			cout << " четырнадцатое ";
		else if (a == 15)
			cout << " пятнадцатое ";
		else if (a == 16)
			cout << " шестнадцатое ";
		else if (a == 17)
			cout << " семнадцатое ";
		else if (a == 18)
			cout << " восемнадцатое ";
		else if (a == 19)
			cout << " девятнадцатое ";
		else if (a == 20)
			cout << " двадцатое ";
		else if (a == 21)
			cout << " двадцать первое";
		else if (a == 22)
			cout << " двадцать второе ";
		else if (a == 23)
			cout << " двадцать третье ";
		else if (a == 24)
			cout << " двадцать четвертое ";
		else if (a == 25)
			cout << " двадцать пятое ";
		else if (a == 26)
			cout << " двадцать шестое ";
		else if (a == 27)
			cout << " двадцать седьмое ";
		else if (a == 28)
			cout << " двадцать восьмое ";
		else if (a == 29)
			cout << " двадцать девятое ";
		else if (a == 30) {
			if (b != 2)
				cout << " тридцатое ";
			else cout << " ";
		}
		else if (a == 31) {
			if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
				cout << " тридцать первое ";
			else cout << " ";
		}
	}if (b >= 1 && b <= 12) {
		if (b == 1)
			cout << "января ";
		else if (b == 2) {
			if (a <= 29)
				cout << "февраля ";
			else cout << " в феврале меньше дней ";
		}
		else if (b == 3)
			cout << "марта ";
		else if (b == 4) {
			if (a < 31)
				cout << "апреля ";
			else cout << " в апреле меньше дней ";
		}
		else if (b == 5)
			cout << "мая ";
		else if (b == 6) {
			if (a < 31)
				cout << "июня ";
			else cout << " в июне меньше дней";
		}
		else if (b == 7)
			cout << "июля ";
		else if (b == 8)
			cout << "августа ";
		else if (b == 9) {
			if (a < 31)
				cout << "сентября ";
			else cout << " в сентябре меньше дней ";
		}
		else if (b == 10)
			cout << "октября ";
		else if (b == 11) {
			if (a < 31)
				cout << "ноября ";
			else cout << " в ноябре меньше дней";
		}
		else if (b == 12)
			cout << "декабря ";
	}
	cout << endl;
	cout << "Задание 2\n Введите число от -1 до 1, где -1 - поворот направо, 1 - налево, 0 - продолжить движение.\n Введите изначальное направление робота, где N - север, S - юг, W - запад, E - восток. \n Программа определит направление робота после исполнения команды ";
	int n;
	string c;
	cin >> n >> c;
	if (c == "N") {
		if (n == -1) cout << " Восток ";
		else if (n == 0) cout << " Движение продолжается на север ";
		else if (n == 1) cout << " Запад ";
	}else if (c == "S") {
		if (n == -1) cout << " Запад ";
		else if (n == 0) cout << " Движение продолжается на юг ";
		else if (n == 1) cout << " Восток ";
	}
	else if (c == "W") {
		if (n == -1) cout << " Север ";
		else if (n == 0) cout << " Движение продолжается на запад ";
		else if (n == 1) cout << " Юг ";
	}
	else if (c == "E") {
		if (n == -1) cout << " Юг ";
		else if (n == 0) cout << " Движение продолжается на восток ";
		else if (n == 1) cout << " Север ";
	}
	
	cout << endl;
	cout << " Задание 3 \n Введите число от 10 до 40 для определения кол-ва учебных заданий " << endl;
	int d,q;
	cin >> d;
	q = d % 10;
	if (d == 10) cout << "Десять учебных пособий";
	if (d == 20) cout << "Двадцать учебных пособий ";
	if (d == 30) cout << "Тридцать учебных пособий ";
	if (d == 40) cout << "Сорок учебных пособий ";
	if (d > 9 && d < 20) {
		if (q == 1) cout << "Одиннадцать учебных пособий";
		else if (q == 2) cout << "Двенадцть учебных пособий";
		else if (q == 3) cout << "Тринадцать учебных пособий";
		else if (q == 4) cout << "Четырнадцать учебных пособий";
		else if (q == 5) cout << "Пятнадцать  учебных пособий";
		else if (q == 6) cout << "Шестнадцать учебных пособий";
		else if (q == 7) cout << "Семнадцать учебных пособий";
		else if (q == 8) cout << "Восемнадцать учебных пособий";
		else if (q == 9) cout << "Дeвятнадцать учебных пособий";
	}
	else if (d > 20 && d < 30) {
		cout << "двадцать ";
		if (q == 1) cout << "одно учебных пособий";
		else if (q == 2) cout << "два учебных пособий";
		else if (q == 3) cout << "три учебных пособий";
		else if (q == 4) cout << "четыре учебных пособий";
		else if (q == 5) cout << "пять учебных пособий";
		else if (q == 6) cout << "шесть учебных пособий";
		else if (q == 7) cout << "семь учебных пособий";
		else if (q == 8) cout << "восемь учебных пособий";
		else if (q == 9) cout << "девять учебных пособий";
	}
	else if (d > 30 && d < 40) {
		cout << "тридцать ";
		if (q == 1) cout << "одно учебных пособий";
		else if (q == 2) cout << "два учебных пособий";
		else if (q == 3) cout << "три учебных пособий";
		else if (q == 4) cout << "четыре учебных пособий";
		else if (q == 5) cout << "пять учебных пособий";
		else if (q == 6) cout << "шесть учебных пособий";
		else if (q == 7) cout << "семь учебных пособий";
		else if (q == 8) cout << "восемь учебных пособий";
		else if (q == 9) cout << "девять учебных пособий";
	}

	cout << endl;
	int g;
	cout << " Задание 4 \n Введите целое число от 100 до 999\n ";
	cin >> g;
	int s, de, e;
	s = g / 100;
	de = g / 10 % 10;
	e = g % 10;
	if (s == 1) {
		cout << "сто ";
	}
	else if (s == 2) {
		cout << "двести ";
	}
	else if (s == 3) {
		cout << "триста ";
	}
	else if (s == 4) {
		cout << "четыреста ";
	}
	else if (s == 5) {
		cout << "пятьсот ";
	}
	else if (s == 6) {
		cout << "шестьсот ";
	}
	else if (s == 7) {
		cout << "семьсот ";
	}
	else if (s == 8) {
		cout << "восемьсот ";
	}
	else if (s == 9) {
		cout << "девятьсот ";
	}
	if (de == 1) {
		if (e == 1) cout << "одиннадцать ";
		else if (e == 2) cout << "двенадцать ";
		else if (e == 3) cout << "тринадцать ";
		else if (e == 4) cout << "четырнадцать ";
		else if (e == 5) cout << "пятнадцать ";
		else if (e == 6) cout << "шестнадцать ";
		else if (e == 7) cout << "семнадцать ";
		else if (e == 8) cout << "восемнадцать";
		else if (e == 9) cout << "девятнадцать ";
	}
	else if (de == 2) {
		cout << "двадцать ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 3) {
		cout << "тридцать ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 4) {
		cout << "сорок ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 5) {
		cout << "пятьдесят ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 6) {
		cout << "шестьдесят ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 7) {
		cout << "семьдесят ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 8) {
		cout << "восемьдесят ";
		if (e == 1) cout << "один";
		else if (e == 2) cout << "два";
		else if (e == 3) cout << "три";
		else if (e == 4) cout << "четыре";
		else if (e == 5) cout << "пять";
		else if (e == 6) cout << "шесть";
		else if (e == 7) cout << "семь";
		else if (e == 8) cout << "восемь";
		else if (e == 9) cout << "девять";
	}
	else if (de == 9) {
		cout << "девяноста ";
			if (e == 1) cout << "один";
			else if (e == 2) cout << "два";
			else if (e == 3) cout << "три";
			else if (e == 4) cout << "четыре";
			else if (e == 5) cout << "пять";
			else if (e == 6) cout << "шесть";
			else if (e == 7) cout << "семь";
			else if (e == 8) cout << "восемь";
			else if (e == 9) cout << "девять";
		}

		cout << endl;
		cout << "\nЗадание №5." << endl;
		int z;
		cout << "Введите год:";
		cin >> z;

		cout << "Это год ";

		switch ((z) % 10) {
		case 0:
		case 1:
			cout << "бел";
			break;
		case 2:
		case 3:
			cout << "черн";
			break;
		case 4:
		case 5:
			cout << "зелён";
			break;
		case 6:
		case 7:
			cout << "красн";
			break;
		case 8:
		case 9:
			cout << "жёлт";
			break;
		}

		

		switch ((z + 8) % 12) {
		case 0:
			cout << "ой крысы";
			break;
		case 1:
			cout << "ой коровы";
			break;
		case 2:
			cout << "ого тигра";
			break;
		case 3:
			cout << "ого зайца";
			break;
		case 4:
			cout << "ого дракона";
			break;
		case 5:
			cout << "ой змеи";
			break;
		case 6:
			cout << "ой лошади";
			break;
		case 7:
			cout << " ой овцы";
			break;
		case 8:
			cout << "ой обезьяны";
			break;
		case 9:
			cout << "ой курицы";
			break;
		case 10:
			cout << "ой собаки";
			break;
		case 11:
			cout << "ой свиньи";
			break;
		}

		return 0;
}