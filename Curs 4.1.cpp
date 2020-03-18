#include <iostream>
using namespace std;

template <typename T>
T funct(T a[], int start, int stop, T an=0)
{
	int s = an;
	for (int i = start; i <= stop; ++i)
	{
		s += a[i];
	}
	return s;
}
/*
class tt 
{
	int* A[100];
	int s, e, an;
public:
	tt(int B,int S,int E,int AN);
	tt();
	int T();
}

tt::tt(int BB, int ss, int ee, int aan = 0)
{
	*A = BB;
	s = ss;
	e = ee;
	an = aan;
}

tt::tt()
{
	A[100] = { 0 };
	s = 0; e = 0; an = 0;
}

int tt::T()
{
	int s = this->an;
	for (int i = this->s; i <= this->e; ++i)
	{
		s += *A[i];
	}
	return s;
}*/

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 }, s;
	s = funct<int>(a, 3, 7);
	cout << s;
	return 0;
}
