#include "Punct.h"

#include <iostream>
using namespace std;


void Punct::Print() {
	cout << "Punct: x = " << x << " y = " << y << endl;
}

Punct::~Punct()  {
	cout << "Punct::~Punct()" << endl;
}

double Punct::GetArea() {
	return 0.0;
}

void Punct::Save(ostream& file) {
	file << "P " << x << ' ' << y << endl;
}

void Punct::Load(istream& file) {
	char X;
	
	file >> X; 
	file >> x >> y;
}