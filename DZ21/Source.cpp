#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	int x, y;
	cout << "Задача 1.\nВведите два значения: ";
	cin >> x >> y;
	int *px = &x;
	int *py = &y;
	cout << "Среднее арифметическое значение чисел " << x << " и " << y << " = " << (*px + *py) / 2 << endl;


	return 0;
}