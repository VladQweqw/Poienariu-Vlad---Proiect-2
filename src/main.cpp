#include <iostream>
#include <fstream>
#include <string>

#include "./headers/Punct.h"
#include "./headers/Cerc.h"
#include "./headers/Figura.h"


#include<list>


void testFigura() {
	vector<Figura*> v;

	v.push_back(new Cerc(10, 1, 7));
	v.push_back(new Cerc(2, 1, 7));

	v.push_back(new Cerc(5, 1, 7));
	v.push_back(new Cerc(6, 1, 7));

	v.push_back(new Punct(1, 7));
	v.push_back(new Punct(1, 7));
	v.push_back(new Punct(1, 7));
	v.push_back(new Punct(1, 7));

	v.push_back(new Cerc(5, 1, 7));
	v.push_back(new Cerc(6, 1, 7));
	
	calcul(v);
	stergere(v);
}



void testFigura() {
	list<Figura*> lista;

}


int main() {
	testFigura();

	return 0;
}

