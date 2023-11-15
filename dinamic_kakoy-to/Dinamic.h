#ifndef DINAMIC_H

#define DINAMIC_H

class Dinamic

{

public:
	Dinamic();
	~Dinamic();

	float get_BatCap();
	float get_timeWork();
	void get_volume(int val);
	void get_a(int as);
	void get_min(int bs);
	void menu();

protected:

private:

	int volume;
	float batCap;
	float timeWork;
	float timeWorkCof = 10;
	int as;
	int bs;

};

#endif
