#include <iostream>
using namespace std;

size_t strlenn(const char* s)
{
	char* p = (char *) s;
	for (; *p != '\0'; p++);
	return (size_t) (p - s);
}

char* strcpyy(const char* s, char* d)
{
	char* p = (char*) s;
	char* q = (char*) d;
	for (; *p != '\0'; p++, q++) {
		*q = *p;
	}
	*q = '\0';
	return d;
}

int main()
{
	char sr[100], dr[100];
	cin >> sr;
	cout << strlenn(sr) << endl;
	cout << strcpyy(sr, dr) << endl;
	return 0;
}