#include "Entero.h"

Entero::Entero(int _value) {
	this->value = _value;
}

Entero::Entero() {
	this->value = 0;
}


void Entero::imprimirObjeto() {
	cout << "<" << this->getTipoObjeto() << "> { value: <<" << this->value << ">> }\n";
}

TipoObjeto Entero::getTipoObjeto() {
	return TipoObjeto::tEntero;
}