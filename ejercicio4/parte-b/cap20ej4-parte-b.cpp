//============================================================================
// Name        : cap20jercicio4-parte-b.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void hola(string);
void adios(string);

//Apartado B
typedef void (*VPF) (string);
void conversacion(VPF , VPF , string, string);


int main() {



	VPF f1= hola;
	VPF f2 =adios;

	conversacion(f1,f2,"Jordi", "Maria");

	return 0;
}

void hola(string nombre) {
cout << "Hola " << nombre << " ! " << endl;
}

void adios(string nombre) {
	cout << "Adios " << nombre << " ! " << endl;
}

void conversacion(VPF f1, VPF f2, string mensaje1,
		string mensaje2) {

f1(mensaje1);
f2(mensaje2);
}
