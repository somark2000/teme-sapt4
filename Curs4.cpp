#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Header.h"
using namespace std;

shape::shape(std::string n, float f)
{
	this->name= n;
	this->flache = f;
}

shape::~shape()
{

}

void shape::setflache(float f)
{
	this->flache = f;
}

void shape::setname(std::string n)
{
	this->name=n;
}

float shape::getflache()
{
	return this->flache;
}

char* shape::getname()
{
	return this->name;
}

void shape::apply(vector<shape*> v, void(f)(shape))
{
	for (shape* c : v)
		f(c);
}
