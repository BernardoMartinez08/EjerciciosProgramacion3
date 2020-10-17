#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

/*Este programa esta orientado a leer del teclado un numero que contenga solo 1 y 0 osea un numero
* BINARIO y con este programa debemos ser capaces de interpretar este numero en digitos y luego 
* convertirlo a decimal usando operadores matematicos de division y modulo.
*/

int main() {
	/*Primero declaro mis variables enteras para el binario que voy a extraer del teclado
	* luego una variable donde almacenare el decimal y el multiplicador que es el valor a
	* multiplicar el digito del binario segun su posicion, ademas de un arreglo para guardar
	* los digitos.
	*/
	int binario = 0, decimal = 0, multiplicador = 1;
	cout << "Ingrese un numero BINARIO: ";
	cin >> binario;
	int digitos[8];


	/*En un for alamecenamos los digitos en el arreglo, es un poco mas sencillo que el ejercicio
	* de los Digitos Enteros, almacenamos el residuo de la divicion del binario entre 10 y actua-
	* lizamos el binario a el mismo entre 10 que nos dejara un entero equivalente a quitar el
	* ultimo digino del binario.
	*/
	for (int i = 0; i < 8; i++) {
		digitos[i] = binario % 10;
		binario = binario / 10;
	}

	/*En este siguiente for entonces proceguimos a calcular el decimal actualizandolo sobre si mismo
	* sumandole la multiplicacion del multimplicador por le digito y actualizando el multiplicador
	* aumentandolo por 2 y obtendremos asi por ejemplo del binario 1101 lo siguiente 
	*1*1 + 0*2 + 1*4 + 1*8 = 13
	*/
	for (int i = 0; i < 8; i++) {
		decimal = decimal + (multiplicador * digitos[i]);
		multiplicador = multiplicador * 2;
	}

	cout << "\n\nEL Decimal del Binario es: " << decimal << endl;

	_getch;
}