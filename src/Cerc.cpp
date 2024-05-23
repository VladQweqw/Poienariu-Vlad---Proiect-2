#include "Cerc.h"

#include <iostream>
using namespace std;


Cerc::~Cerc() {
	cout << "Cerc::~Cerc()" << endl;
}



void Cerc::Print() {
	cout << "Cerc: raza = " << raza << endl;

	Punct::Print();
}

double Cerc::GetArea() {
	return 3.14 * raza * raza;
}

void Cerc::Save(ostream& file) {
	file << "C " << raza << endl;

	Punct::Save(file);
}


void Cerc::Load(istream& file) {
	char X;

	file >> X;
	file >> raza;

	Punct::Load(file);
}

