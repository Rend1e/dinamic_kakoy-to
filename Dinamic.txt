#include <iostream>
#include "Dinamic.h"


Dinamic::Dinamic() : volume(0), batCap(100), timeWork(0), as(), bs()
{}
Dinamic::~Dinamic()
{}

using namespace std;

void Dinamic::menu()
{
	cout << endl << " Вывод меню" << endl;
	cout << endl << "Включить - 1" << endl;
	cout << "Выключить - 2" << endl;
	cout << "Увеличить громкость - 3" << endl;
	cout << "Уменьшить громкость - 4" << endl;
	cout << "Показать время работы аккумулятора - 5" << endl;
	cout << "Показать заряд аккумулятора - 6" << endl;
}

float Dinamic::get_BatCap()
{
	if (as == 1) batCap = batCap;
	else
		batCap = 100 - bs;
}

float Dinamic::get_timeWork()
{
	timeWork = batCap / (timeWorkCof + 0.1 * volume);
}

void Dinamic::get_volume(int val)
{
	volume = val;
}

void Dinamic::get_a(int a)
{
	as = a;
}

void Dinamic::get_min(int b)
{
	bs = b;
}
