#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main() {
	int numero = 21;
	int* numeroPtr = nullptr; //Apuntador a un entero,Almacena un valor en memoria.
	
	//Operador &: Devuelve la direccion de memoria de su operando
	numeroPtr = &numero;

	cout << "Valor de Numero: " << numero << "\n";
	cout << "Valor de NumeroPtr: " << numeroPtr << "\n";

	cout << "\n";

	cout << "Direccion de Memoria de Numero: " << &numero << "\n";
	
	cout << "\n";
	//Operador *:
	*numeroPtr = 8;
	cout << "Nuevo valor de Numero: " << numero << "\n";
	cout << "Direccion de Memoria de Numero: " << &numero << "\n";

	cout << "\n";

	numero = 33;
	cout << "Valor depositado eb la posicion de memoria: " << *numeroPtr << "\n";
	cout << "Direccion de Memoria de NumeroPtr: " << &numeroPtr << "\n";
		
	//Array
	//Arreglo de tamano fijo
	int nota[5];
	//Areglo Dinamico
	vector<int> lista;

	//Definicion de arreglo con apuntadores
	int* intArray = nullptr;
	intArray = new int[3];

	intArray[0] = 21;
	intArray[1] = 11;
	intArray[2] = 3;

	for (int i = 0; i < 3; i++) {
		cout << "intArray[" << i << "]: { valor: " << intArray[i] << ", direcccion: " << &intArray[i] << " }\n";
	}

	_getch();
}