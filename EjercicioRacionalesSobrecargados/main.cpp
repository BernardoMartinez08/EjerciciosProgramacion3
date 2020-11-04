#include <iostream>
#include <conio.h>
#include "RacionalSC.h"

using namespace std;


int main() {
	//Definimos tres racionales
	RacionalSC r1(1, 3);
	RacionalSC r2(4, 2);
	RacionalSC r3(5, 4);

	//Realizamos las diferentes operaciones matematicas utilizando los operadores sobrecargados
	RacionalSC suma = r1 + r2;
	RacionalSC resta = r1 - r2;
	RacionalSC multiplicacion = r1 * r2;
	RacionalSC divicion = r1 / r2;
	RacionalSC potencia1 = r1 ^ 2;
	RacionalSC potencia2 = r2 ^ 3;

	//Aqui usamos el operador sobrecargado << de output para imprimir diferentes valores 
	//Imprimimos los Racionales originales
	cout << "R1: " << r1 << " \n";
	r1.getDecimal();

	cout << "\n";

	cout << "R1: " << r2 << " \n";
	r2.getDecimal();

	cout << "\n";

	//Impresion de la Suma
	cout << "RESULTADO DE SUMA: " << suma << "\n";
	suma.getDecimal();

	cout << "\n";

	//Impresion de la Resta
	cout << "RESULTADO DE RESTA: " << resta << "\n";
	resta.getDecimal();

	cout << "\n";

	//Impresion de la Multiplicacion
	cout << "RESULTADO DE MULTIPLICACION: " << multiplicacion << "\n";
	multiplicacion.getDecimal();

	cout << "\n";

	//Impresion de la Divicion
	cout << "RESULTADO DE DIVICION: " << divicion << " \n";
	divicion.getDecimal();

	cout << "\n";

	//Impresion de la potenciacion
	cout << "RESULTADO DE POTENCIA: " << potencia1 << "\n";
	potencia1.getDecimal();

	cout << "RESULTADO DE POTENCIA: " << potencia2 << "\n\n";
	potencia2.getDecimal();

	int num, den;
	cout << "INGRESA EL NUMERADOR: ";
	std::cin >> num;
	cout << "INGRESA EL DENOMINADOR: ";
	std::cin >> den;

	RacionalSC NR1(num, den);
	cin >> num,den;

	cout << "NR1: " << NR1 << " \n";
	NR1.getDecimal();
	cout << "\n";

	//Comparacion del Racional r1 y r2 con los operadores de comparacion sobrecargados
	if (r1 > r2)
		cout << "R1 es mayor que R2 \n";

	if (r1 < r2)
		cout << "R1 es menor que R2 \n";
	
	if (r1 >= r2)
		cout << "R1 es mayor o igual que R2 \n";
	
	if (r1 <= r2)
		cout << "R1 es menor o igual que R2 \n";
	
	if (r1 == r2)
		cout << "R1 es igual a R2 \n";

	if (r1 != r2)
		cout << "R1 es diferente de R2 \n";

	_getch();
}
