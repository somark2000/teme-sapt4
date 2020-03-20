#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Header.h"
using namespace std;

shape::shape(char n[], float f)
{
	strcpy(this->name, n);
	this->flache = f;
}

shape::~shape()
{

}

void shape::setflache(float f)
{
	this->flache = f;
}

void shape::setname(char n[])
{
	strcpy(this->name, n);
}

float shape::getflache()
{
	return this->flache;
}

char* shape::getname()
{
	return this->name;
}

void shape::apply(vector<shape*> v, void (*f))
{
	f;
}