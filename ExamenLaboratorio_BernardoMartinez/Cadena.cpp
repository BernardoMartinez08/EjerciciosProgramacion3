#include "Cadena.h"
#include <iostream>
using namespace std;

//Constructor sin parametos
Cadena::Cadena() : contenido(nullptr) {

}

/*Constructor con parametros que usando la funcion strcpy_s copia un char* constante recibido de parametro
  dentro del contenido de nuestra cadena*/
Cadena::Cadena(const char* _cadena) {
	contenido = new char[strlen(_cadena) + 1];
	strcpy_s(contenido, strlen(_cadena) + 1, _cadena);
}

/*En la sobrecarga del operador +, copiamos en una cadena resultado el contenido de una Cadena a y luego le
  concatena el contenido de una Cadena b, retornando una cadena resultado, todo lo anterior haciendo uso de
  stslen(tamanio), strcpy_s(para copiar) y strcap_s(para concatenar).*/
Cadena& operator+(const Cadena& a, const Cadena& b) {
	Cadena resultado;
	resultado.contenido = new char[strlen(a.contenido) + strlen(b.contenido) + 1];
	strcpy_s(resultado.contenido, strlen(a.contenido) + 1, a.contenido);
	strcat_s(resultado.contenido, strlen(resultado.contenido) + strlen(b.contenido) + 1, b.contenido);

	return resultado;
}

/*Sobrecarga del operador de output, para hacer la salida de pantalla de una cadena.*/
std::ostream& operator<<(std::ostream& out, const Cadena& a) {
	out << a.contenido;
	return out;
}

/*La funcion tamanio que devuelve el tamano de una cadena usando srtlen().*/
int Cadena::tamanio() {
	return strlen(this->contenido);
}

/*La funcion at que recibe una pocision de parametro para localizar un caracter dentro del contenido de
  la cadena y retornamos ese caracter.*/
char Cadena::at(int posicion) {
	char caracterAt;
	if (posicion < this->tamanio()) {
		caracterAt = this->contenido[posicion];
	}

	return caracterAt;
}

/*Esta funcion subcadena hace uso de sus parametros que es el caracter a partir del cual partiremos y el
  otro para la cantidad de caracteres que vamos a extraer, haciendo uso de un char* que almacena tempor-
  almente los caracteres extraidos con la funcion at(), para luego copiarla en una cadena resultado que
  es la cual retornaremos al final, hacemos uso de funciones como strcpy_s y strcat_s igualmente.*/
Cadena Cadena::subcadena(int Comienzo, int numCaracteres) {
	Cadena resultado;
	int count = 0, tam = numCaracteres + 1;
	resultado.contenido = new char[tam];
	char* caracter = new char[2];

	for (int i = Comienzo; i < (Comienzo + numCaracteres); i++) {
		caracter[0] = this->at(i);
		caracter[1] = '\0';

		if (i == Comienzo) 
			strcpy_s(resultado.contenido, 2, caracter);
		else
			strcat_s(resultado.contenido, strlen(resultado.contenido) + 2, caracter);

	}

	return resultado;
}
