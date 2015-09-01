/*
 * Encriptado.h
 *
 *  Created on: Aug 30, 2015
 *      Author: raquel
 */

#ifndef ENCRIPTADO_H_
#define ENCRIPTADO_H_
#include <iostream>
using namespace std;

class Encriptado {
public:
	Encriptado();
	virtual ~Encriptado();
	void avanzada(char[10]);
	void retrasada(char[10]);
	void getPalabraEncriptada();
	static int numCodificaciones;
	static int getNumCodicifaciones();

private:
	string palabraEncriptada[10];
};

#endif /* ENCRIPTADO_H_ */
