/*
 * Encriptado.cpp
 *
 *  Created on: Aug 30, 2015
 *      Author: raquel
 */

#include "Encriptado.h"
#include <iostream>
using namespace std;

int Encriptado::numCodificaciones=0;

Encriptado::Encriptado() {
 cout << "Creando encriptador" << endl;
 //numCodificaciones = 0;
}

Encriptado::~Encriptado() {
 cout << "Eliminando encriptador" << endl;
}

void Encriptado::avanzada(char palabra[10]) {
    char palabraTemp[10];

    numCodificaciones++;

	for (int i = 0; i<10  ; i++){
		if (palabra[i]== 'z'){
						palabraTemp[i]= 'a';
						}
		else if (palabra[i]!='\0' && palabra[i]!= 'z'){
			palabraTemp[i]=++palabra[i];
			}

	else{
		palabraTemp[i]= '\0';
	}
	}

	for (int i=0; i<10; i++){
		if (palabraEncriptada[i]=="\0"){
	this->palabraEncriptada[i]= palabraTemp;
	break;
		}
	}
}

void Encriptado::retrasada(char palabra[10]) {
    char palabraTemp[10];

    numCodificaciones++;

	for (int i = 0; i<10  ; i++){
		if (palabra[i]== 'a'){
					palabraTemp[i]= 'z';
					}
		else if (palabra[i]!='\0' && palabra[i]!= 'a'){
		palabraTemp[i]= --palabra[i];
		}
	else{
		palabraTemp[i]= '\0';
	}
	}
	for (int i=0; i<10; i++){
		if (palabraEncriptada[i]=="\0"){
	this->palabraEncriptada[i]= palabraTemp;
	break;
		}
	}
}

void Encriptado::getPalabraEncriptada() {
	for (int i=0; i<10 ; i++){
		cout << palabraEncriptada[i] << " ";
	}
	cout << endl;
}

int Encriptado::getNumCodicifaciones() {
	return numCodificaciones;
}
