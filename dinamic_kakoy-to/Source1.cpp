#include "Dinamic.hpp"

Dinamic::Dinamic() : volume(0), batCap(100), timeWork(0), as(), bs()

{}

Dinamic::~Dinamic()

{}

float Dinamic::get_BatCap()

{

	if (as == 1) batCap = batCap;

	else

		batCap = 100 - bs;

}

float Dinamic::get_timeWork()

{

	timeWork = timeWorkey;

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