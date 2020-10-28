#pragma once
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta {
public:
	//Creacion de prototipos publicos 
	
	Cuenta(); //Prototipo de Constructor sin parametros que incisializa el saldo en 0
	Cuenta(int); //Prototipo de Constructor que pide como parametro in entero para inicializar el saldo

	void Abonar(int); //Prototipo:Funcion abonar que tiene como parametro un entero para sumar al saldo
	void Cargar(int); //Prototipo:Funcion Cargar que igual tiene un entero como parametro pero esta ves para restar del saldo
	int obtenerSaldo(); //Prototipo:Funcion Obtener Saldo que nos devuelve un entero saldo

private:
	int saldo; //Atributo saldo de tipo privado
};

#endif
