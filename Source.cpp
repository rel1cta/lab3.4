// Lab_03_4.cpp
// < Шестопалов Дмитро >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 20
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ((y <= (x - 2) * (x - 2) - 3 && y >= x) ||
		(y <= (x - 2) * (x - 2) - 3 && y >= -x && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}