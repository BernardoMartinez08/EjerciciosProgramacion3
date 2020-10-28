#include <iostream>
#include <conio.h>
#include "Racional.h"


using namespace std;

int main(){
	/*Este ejercicio simula operaciones
	* matematicas con numeros Racionales(Fracciones)*/

	Racional r1(1, 3);
	Racional r2(4, 2);
	Racional r3(5, 4);


	Racional suma = r1.suma(r2);
	Racional resta = r1.resta(r2);
	Racional multiplicacion = r1.multiplicacion(r2);
	Racional divicion = r1.division(r2);
	Racional potencia1 = r1.potencia(2);
	Racional potencia2 = r2.potencia(3);

	Racional resultado = r1.multiplicacion(r2).suma(r3).potencia(3);

	cout << "R1: \n";
	r1.imprimirRacional();
	r1.imprimirDecimal();

	cout << "\n\n";

	cout << "R2: \n";
	r2.imprimirRacional();
	r2.imprimirDecimal();

	cout << "\n\n";

	cout << "RESULTADO DE SUMA: \n";
	suma.imprimirRacional();
	suma.imprimirDecimal();

	cout << "\n\n";

	cout << "RESULTADO DE RESTA: \n";
	resta.imprimirRacional();
	resta.imprimirDecimal();

	cout << "\n\n";

	cout << "RESULTADO DE MULTIPLICACION: \n";
	multiplicacion.imprimirRacional();
	multiplicacion.imprimirDecimal();

	cout << "\n\n";

	cout << "RESULTADO DE DIVICION: \n";
	divicion.imprimirRacional();
	divicion.imprimirDecimal();

	cout << "\n\n";

	cout << "RESULTADO DE POTENCIA: \n";
	potencia1.imprimirRacional();
	potencia1.imprimirDecimal();

	cout << "RESULTADO DE POTENCIA: \n";
	potencia2.imprimirRacional();
	potencia2.imprimirDecimal();

	cout << "RESULTADO DE OPERACION MULTIPLE: \n";
	resultado.imprimirRacional();
	resultado.imprimirDecimal();

	_getch();
}