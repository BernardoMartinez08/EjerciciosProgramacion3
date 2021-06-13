#include "Cadena.h"

Cadena::Cadena(const char* _value) {
	this->value = new char[strlen(_value)];
	strcpy_s(this->value, strlen(_value) + 1, _value);
}

Cadena::Cadena() {
	this->value = nullptr;
}


void Cadena::imprimirObjeto() {
	cout << "<" << this->getTipoObjeto() << "> { value: <<" << this->value << ">> }\n";
}

TipoObjeto Cadena::getTipoObjeto() {
	return TipoObjeto::tCadena;
}