#ifndef NODO_H
#define NODO_H

class Nodo {
public:
	Nodo();
	Nodo(int, Nodo*);
private:
	int valor;
	Nodo* siguiente;
};

#endif // !NODO_H
