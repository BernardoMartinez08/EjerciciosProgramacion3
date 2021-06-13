#include "Logico.h"

Logico::Logico(bool _value) {
	this->value = _value;
}

Logico::Logico() {
	this->value = false;
}


void Logico::imprimirObjeto() {
	cout << "<" << this->getTipoObjeto() << "> { value: <<" << this->value << ">> }\n";
}

TipoObjeto Logico::getTipoObjeto() {
	return TipoObjeto::tLogico;
}