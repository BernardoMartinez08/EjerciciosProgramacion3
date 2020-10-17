#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

/*El el siguiente ejercicio hay que imprimir una tabla con tres columnas,
en la primera los numeros del 0 al 10 y en la segunda y tercera sus 
cuadradis y cubos respectivamente utilizando caracteres de escape.
*/

int main() {
	//Imprimimos el titulo de tabla y los encabezados.
	cout << "*****TABLA DE NUMEROS*****\n" << "ENTERO\t" << "CUADRADO\t" << "CUBO\n" ;

	//En un ciclo for utilizando la i como valiable entera calcularemos multiplicandola
	//por si misma 2 y 3 veces para calcular su cuadrado y cubo respectvamente.

	for (int i = 0; i < 11; i++) {

		//Usando caracteres de escape imprimimos los numeros con tabulaciones y saltos de linea.

		cout << i << "\t" << (i * i) << "\t\t" << (i * i * i) << "\n";
	}

	_getch();
}