#include <iostream>
#include <fstream>
using namespace std;

struct MyStruct
{
	bool in;
	double amount;
};

class Kont
{
public:
	Kont();
	void takeout(double m);
	void add(double m);
	double howmuch();
	void history();
	void save();
	~Kont();
		
private:
	double money;
	MyStruct a[100];
	int n;
	ofstream f;
};

Kont::Kont()
{
	money = 0;
	n = 0;
	f.open("out.dat");
}

void Kont::save()
{
	if (a[n].in == 0) f << "OUT ";
	else
	{
		f << "IN ";
	}
	f << a[n].amount << '\n';
}

void Kont::add(double m)
{
	money += m;
	cout << "Transaction over \n";
	a[n].amount = m;
	a[n].in = 1;
	save();
	n++;
}

double Kont::howmuch()
{
	return money;
}

void Kont::takeout(double m)
{
	if (m > howmuch()) 
	{
		cout << "not enough founds";
		cout << "Transaction over \n";
	}
	else
	{
		money -= m;
		cout << "Transaction over \n";
		a[n].amount = m;
		a[n].in = 0;
		save();
		n++;
	}
}

void Kont::history()
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i].in == 0) cout << "OUT ";
		else cout << "IN ";
		cout << a[i].amount << '\n';
	}
}

Kont::~Kont()
{
}

int main()
{
	Kont k;
	return 0;
}