#pragma once
#ifndef NODO_ARBOLE_H
#define NODO_ARBOLE_H

class NodoArbolE {
public:
	/*Constructor de la clase NodoArbol que recibe los paranetros de la rama, el codigo nombre
	y salario del empleado y sus ramas derecha e izquierda.*/
	NodoArbolE(int, const char*, float, NodoArbolE*, NodoArbolE*);

	/*Funciones get para los atributos Codigo, Nombre, Salario e hijos izquiero y derecho.*/
	int getCodigo();
	char* getNombre();
	float getSalario();
	NodoArbolE* getHijoDerecho();
	NodoArbolE* getHijoIzquierdo();

	/*Funciones set para los atributos Codigo, Nombre, Salario e hijos izquiero y derecho.*/
	void setCodigo(int);
	void setNombre(const char*);
	void setSalario(float);
	void setHijoDerecho(NodoArbolE*);
	void setHijoIzquierdo(NodoArbolE*);
private:
	//Atributos privados para codigo, nombre, salario e hijos izquiero y derecho. 
	int codigo;
	char* nombre;
	float salario;

	NodoArbolE* hijoDerecho;
	NodoArbolE* hijoIzquierdo;
};

#endif // !NODO_ARBOL_H
