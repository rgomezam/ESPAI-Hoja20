//============================================================================
// Name        : cap20ejercicio4-parte-c.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;


class Acciones {
public:
	int hola(string nombre) {
	cout << "Hola " << nombre << " ! " << endl;
	return 1;
	}

	void adios(string nombre) {
		cout << "Adios " << nombre << " ! " << endl;
	}

};


int main() {

cout << "Hello world" << endl;


	int  (Acciones::*punterofuncion)(string) = &Acciones::hola;
	void (Acciones::*punterofuncion2)(string) = &Acciones::adios;

	Acciones a1;
	(a1.*punterofuncion)("Raquel");
	(a1.*punterofuncion2)("Raquel");

	return 0;
}
