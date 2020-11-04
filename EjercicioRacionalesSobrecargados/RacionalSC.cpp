#include "RacionalSC.h"
#include <iostream>
using namespace std;

RacionalSC::RacionalSC() : numerador(0), denominador(0) {
}

//Imprimentacion de constructor con parametros y simplificacion del racional
RacionalSC::RacionalSC(int _numerador, int denominador) : numerador(_numerador), denominador(denominador) {
	simplificar();
}

/*La funcion simplificar que nos ayuda a llevar el racional a su minima expresion atraves de un for que va dividiendo
  el racional por sus factores comunes (mitad, tercera.....*/
void RacionalSC::simplificar() {
	int mayor = numerador > denominador ? numerador : denominador;

	for (int i = 2; i < mayor; i++) {
		if (numerador % i == 0 && denominador % i == 0) {
			numerador = numerador / 2;
			denominador = denominador / 2;

			i = 1;
		}
	}
}

//Operadores de Steam
/*La funcion con el operador << de output nos imprime dependiedo se algunas condiciones como ser que no sea 0 el 
  denominador si no imprime el racional expresado como fracccion*/
std::ostream& operator<<(std::ostream& cout, const RacionalSC& racional) {
	if (racional.numerador == 0 && racional.denominador == 0) {
		cout << "Resultado Indefinido\n";
	}
	else if (racional.denominador == 0) {
		cout << "No se puede dividir por vero\n";
	}
	else {
		cout << racional.numerador << "/" << racional.denominador << "\n";
	}

	return cout;
}

/*La funcion con el operador >> de imput nos ingresa los valores recibidos de un racional en el denominador y numerador*/
std::istream& operator>>(std::istream& cin, RacionalSC& racional) {
	cin >> racional.numerador >> racional.denominador;
	return cin;
}

/*La funcion gte decimal que nos devuleve el decimal de un racional si su denominador y numerador son diferentes de 0*/
float RacionalSC::getDecimal() {
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado Indefinido\n";
		return 0;
	}
	else if (denominador == 0) {
		cout << "No se puede dividir por cero\n";
		return 0;
	}
	else {
		return (float(numerador) / float(denominador));
	}
}


//Operadores Matematicos
RacionalSC& operator+(const RacionalSC& r1, const RacionalSC& r2) {
	if (r1.denominador == r2.denominador) {
		RacionalSC respuesta(r1.numerador + r2.numerador, r1.denominador);
		return respuesta;
	}
	else {
		RacionalSC respuesta((r1.numerador * r2.denominador) + (r2.numerador * r1.denominador),
			(r1.denominador * r2.denominador));
		return respuesta;
	}
}

RacionalSC& operator-(const RacionalSC& r1, const RacionalSC& r2) {
	if (r1.denominador == r2.denominador) {
		RacionalSC respuesta(r1.numerador - r2.numerador, r1.denominador);
		return respuesta;
	}
	else {
		RacionalSC respuesta((r1.numerador * r2.denominador) - (r2.numerador * r1.denominador),
			(r1.denominador * r2.denominador));
		return respuesta;
	}
}

RacionalSC& operator*(const RacionalSC& r1, const RacionalSC& r2) {
	RacionalSC resultado((r1.numerador * r2.numerador), (r1.denominador * r2.denominador));

	return resultado;
}

RacionalSC& operator/(const RacionalSC& r1, const RacionalSC& r2) {
	RacionalSC resultado((r1.numerador * r2.denominador), (r1.denominador * r2.numerador));

	return resultado;
}


//Operadores de Comparacion
bool RacionalSC::operator>(RacionalSC& r2) {
	if (this->getDecimal() > r2.getDecimal())
		return true;
	else
		return false;
}

bool RacionalSC::operator>=(RacionalSC& r2) {
	if (this->getDecimal() > r2.getDecimal())
		return true;
	else if (this->numerador == r2.numerador && this->denominador == r2.denominador) 
		return true;
	else
		return false;
}

bool RacionalSC::operator<(RacionalSC& r2) {
	if (this->getDecimal() < r2.getDecimal())
		return true;
	else
		return false;
}

bool RacionalSC::operator<=(RacionalSC& r2) {
	if (this->getDecimal() < r2.getDecimal())
		return true;
	else if (this->numerador == r2.numerador && this->denominador == r2.denominador) 
		return true;
	else
		return false;
}

bool RacionalSC::operator==(const RacionalSC& r2) {
	if (this->numerador == r2.numerador && this->denominador == r2.denominador) {
		return true;
	}
	return false;
}

bool RacionalSC::operator!=(const RacionalSC& r2) {
	if (this->numerador != r2.numerador || this->denominador != r2.denominador) {
		return true;
	}
	return false;
}

//Operador de Potenciacion
RacionalSC& operator^(const RacionalSC& base, const int& expo) {
	RacionalSC resultado;
	resultado.numerador = 1;
	resultado.denominador = 1;

	for (int i = 0; i < expo; i++) {
		resultado.numerador *= base.numerador;
		resultado.denominador *= base.denominador;
	}

	return resultado;
}