#pragma once
#ifndef OBJETO_H
#define OBJETO_H

enum TipoObjeto {
	tEntero,
	tLogico,
	tCadena,
};

class Objeto {
public:
	virtual TipoObjeto getTipoObjeto() = 0;
	virtual void imprimirObjeto() = 0;
};

#endif // !OBJETO_H
