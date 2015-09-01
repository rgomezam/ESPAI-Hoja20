//============================================================================
// Name        : capitulo20ejercicio5.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Encriptado.h"

Encriptado encriptador1;
char palabra1[10];
char opt;

void (Encriptado::*fwd) (char[]) = &Encriptado::avanzada;
void (Encriptado::*back)(char[]) = &Encriptado::retrasada;


int main() {
	cout << "Bienvenido al encriptador" << endl;

	while (true){
		cout << "introduzca palabra ( o escriba \"exit \" para salir y ver el resultado de la encriptacion) " << endl;
		cin >> palabra1;
		if (palabra1[0] == 'e'  && palabra1[1]=='x' && palabra1[2]=='i' && palabra1[3]=='t'){
			cout << "Saliendo" << endl;
			break;
		}
		else{
			//cin.clear();
			//fflush(stdin);
			cout  << "Encriptacion avanzada o retrasada? (introduzca a/r)" << endl;
			cin >> opt;
			switch(opt){
			case 'a':
				//encriptador1.avanzada(palabra1);
				(encriptador1.*fwd)(palabra1);
				break;
			case 'r':
				//encriptador1.retrasada(palabra1);
				break;
			default:
				break;
			}
		}

	}

	cout << "El resultado de la encriptacion es: " << endl;
	 encriptador1.getPalabraEncriptada();

	 cout << "El numero de codificaciones hechas es: " << Encriptado::numCodificaciones << endl;

	return 0;
}
