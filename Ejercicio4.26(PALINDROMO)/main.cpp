#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

/*En el siguiente ejercicio de palindromo tenemos un ejercicio en el cual recogemos un
* numero de 5 dijitos del teclado y usando operadores matamaticos dividirlo en sus digitos
* individuales y asi verificar si cumple las reglas de un palindromo que se lea al reves y
* al derecho de la misma forma.
*/

int main() {

	//Recogemos del teclado un numero de 5 digitos.
	
	cout << "Ingrese un numero de 5 digitos: ";
	int numero = 0;
	cin >> numero;
	int digitos[5];
	
	//En un arreglo almacenamos los digitos del numero que recogimos del teclado.

	digitos[0] = numero / 10000;
	digitos[1] = (numero % 10000) / 1000;
	digitos[2] = ((numero % 10000) % 1000) / 100;
	digitos[3] = (((numero % 10000) % 1000) % 100) / 10;
	digitos[4] = ((((numero % 10000) % 1000) % 100) % 10) / 1;

	/*Utilizando el arreglo lo analizamos en orden y alrevez en un if si los digitos que
	* comparamos son iguales hasta el ultimo nivel del if entonces imprimimos que es un
	* palindormo e imprimimos los digitos.
	* 
	* Si no es palindromo igual imprimimos un mensaje que no es palindormo y proseguimos
	* a imprimir los digitos.
	*/

	if (digitos[0] == digitos[4]) {
		if (digitos[1] == digitos[3]) {
			if (digitos[2] == digitos[2]) {
				cout << "\nEl numero: " << numero << " es un PALNDROMO, sus digitos\n";

				for (int i = 0; i < 5; i++) {
					cout << digitos[i] << "   ";
				}
				cout << "\n\n\tY\n\n";
						
				for (int i = 4; i > -1; i--) {
					cout << digitos[i] << "   ";
				}
				cout << "\nSe leen igual en ambos sentidos.\n";
			}
		}
	}
	else {
		cout << "\nEl numero: " << numero << " NO es un PALNDROMO, sus digitos\n";

		for (int i = 0; i < 5; i++) {
			cout << digitos[i] << "   ";
		}
		cout << "\n\n\tY\n\n";

		for (int i = 4; i > -1; i--) {
			cout << digitos[i] << "   ";
		}
		cout << "\nNo Se leen igual en ambos sentidos.\n";
	}


	_getch();
}