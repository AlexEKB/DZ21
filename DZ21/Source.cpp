#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1.
	int x, y;
	cout << "������ 1.\n������� ��� ��������: ";
	cin >> x >> y;
	int *px = &x;
	int *py = &y;
	cout << "������� �������������� �������� ����� " << x << " � " << y << " = " << (*px + *py) / 2 << endl;


	return 0;
}