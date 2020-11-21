#pragma once
#ifndef CADENA_H
#define CADENA_H
#include <iostream>

class Cadena {
	/*Sobre carga de operador de suma para concatenar dos cadenas en una y la
	sobrecarga del operador de output para la salida de pantalla de una cadena.*/

	friend Cadena& operator+(const Cadena&, const Cadena&);
	friend std::ostream& operator<<(std::ostream&, const Cadena&);

public:
	//Constructores con y sin parametros.
	Cadena();
	Cadena(const char*);

	//sobrecarga de operador miembro += para concatenar cadena.
	Cadena& operator+=(const Cadena&);

	//Funcion tamanio que devolvera el tamano de una cadena.
	int tamanio();
	//Funcion que extrae una parte de la cadena.
	Cadena subcadena(int, int);
	//Funcion que extrae un caracter en la posision especificada.
	char at(int);

private:
	//Un char* que almacena en memoria los caracteres con forman el contenido.
	char* contenido;
};


#endif // !CADENA_H
