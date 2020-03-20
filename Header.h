#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class shape
{
public:
	shape(char n[],float f);
	~shape();
	void setflache(float f);
	void setname(char n[]);
	float getflache();
	char* getname();
	void apply(vector<shape*> v,void (*f));

private:
	float flache;
	char name[];
};
