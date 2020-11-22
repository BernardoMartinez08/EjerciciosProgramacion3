#include "Caja.h"
#include <iostream>
using namespace std;

/*En el constructor sin parametros inicializamos nuestros atrubutos en 1 ya que no recibimos datos
para inicializarlos.*/
Caja::Caja() : largo(1), ancho(1), alto(1) {
}

/*En nuestro segundo constructor ya recibimos parametros los cuales usamos para inicializar nuestros
atributos, pero que se verifica que sean diferentes de 0, de serlo asi incisializamos, si no les damos
el valor de 1 e indicamos con un mensaje el error.*/
Caja::Caja(int _Largo, int _Ancho, int _Alto) : largo(_Largo), ancho(_Ancho), alto(_Alto) {
	if (largo == 0 || ancho == 0 || alto == 0) {
		largo = 1;
		ancho = 1;
		alto = 1;

		cout << "Largo, Ancho y Alto deben ser > 0\n\n";
	}
	else {
		largo = _Largo;
		ancho = _Ancho;
		alto = _Alto;
	}
}

/*Funcion setLargo que recibe un entero para asignarle al atributo de largo.*/
void Caja::setLargo(int _largo) {
	this->largo = _largo;
}

/*Funcion setAncho que recibe un entero para asignarle al atributo de ancho.*/
void Caja::setAncho(int _ancho) {
	this->ancho = _ancho;
}

/*Funcion setAlto que recibe un entero para asignarle al atributo de Alto.*/
void Caja::setAlto(int _alto) {
	this->alto = _alto;
}

/*Funcion getLargo que retorna un entero correspondiente al atrubuto largo.*/
int Caja::getLargo() {
	return largo;
}

/*Funcion getAncho que retorna un entero correspondiente al atrubuto ancho.*/
int Caja::getAncho() {
	return ancho;
}

/*Funcion getAlto que retorna un entero correspondiente al atrubuto alto.*/
int Caja::getAlto() {
	return alto;
}

/*Funcion obtenerVolumen que atraves de la formula aprendida en Geometria del volumen de una caja la cual es
el largo de la caja multiplicado por el ancho y el alto de la misma, retorna un float con dicho volumen.*/
float Caja::obtenerVolumen() {
	float Volumen = (largo * ancho * alto);
	return Volumen;
}

/*Funcion del operador sobrecargado de suma, la cual crea una nueva instancia de caja, y a su ves con los parametros
recubidos que son dos cajas establece el alto,ancho y largo con la suma de los mismos atributos de las ambas recibidas
de parametro y retorna dicha caja nueva formada a traves de la union de la a y b.*/
Caja& operator+(const Caja& a, const Caja& b) {
	Caja NuevaCaja;
	NuevaCaja.alto = (a.alto + b.alto);
	NuevaCaja.ancho = (a.ancho + b.ancho);
	NuevaCaja.largo = (a.largo + b.largo);

	return NuevaCaja;
}
