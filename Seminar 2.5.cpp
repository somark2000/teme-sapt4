#include <iostream>
#include <random>
using namespace std;

int mail()
{
	int d = 0;
	for (int i = 0; i < 10000; ++i)
	{
		int x, y;
		x = rand() / RAND_MAX;
		y = rand() / RAND_MAX;
		if (x * x + y * y <= 1)
			d++;
	}
	cout << "pi= " << 4 * d / 10000;
	return 0;
}