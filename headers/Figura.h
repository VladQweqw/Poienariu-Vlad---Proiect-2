#pragma once

#include <fstream>
using namespace std;

class Figura
{
public:
	Figura() {}
	virtual ~Figura() {}


	virtual void Print() = 0;
	virtual double GetArea() = 0;
	virtual void Save(ostream& file) = 0;
	virtual void Load(istream& file) = 0;

};

