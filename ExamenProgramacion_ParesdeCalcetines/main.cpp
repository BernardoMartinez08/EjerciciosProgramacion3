#include <iostream>
#include <conio.h>

#include <vector>
using namespace std;

/*En la funcion getPares recibimos de parametro un vector de "Calcetines", el cual para no alterarlo lo
clonamos en uno propio de la funcion llamado aux, con este arreglo en un ciclo while evaluaremos que la 
posicion en i del arreglo sea diferente de 0 lo cual indica que hay un calcetin ahi, por tanto la posicion
con un cero esta vacia, de cumplirse entonces pasamos  evaluar un entero de calcetin temporal el cual 
almacena el entero a buscarle par en ese momento, si este calcetin temporal es 0 se le coloca uno para
buscarle pareja y esa posicion se vuelve cero en el arreglo eso significa que ya lo tomamos en cuenta en 
una busqueda de parejas.
Luego si este calcetinTemporal es un entero diferente de 0 se le busca una pareja en el arreglo si se 
encuentra se aumenta pares y esa posicion donde estaba la pareja se vuelve cero.*/
int getPares(vector<int> Calcetines) {
	vector<int>aux = Calcetines;
	int calcetinTemporal = 0, pares = 0;;

	int i = 0;
	while(i != aux.size()){
		if (aux[i] != 0) {
			if (calcetinTemporal == 0) {
				calcetinTemporal = aux[i];
				aux[i] = 0;
				i = 0;
			}
			else if (calcetinTemporal == aux[i]) {
				calcetinTemporal = 0;
				pares++;
				aux[i] = 0;
				i = 0;
			}
			else
				i++;
		}
		else
			i++;
	}
	//Utilice un ciclo While con fines de practica, pero se puede hacer perfectamente con un ciclo for

	return pares;
}


int main() {
	//Creamos los "Calcetines en nuestro vector."
	vector<int> Calcetines;
	Calcetines.push_back(1);
	Calcetines.push_back(2);
	Calcetines.push_back(1);
	Calcetines.push_back(2);
	Calcetines.push_back(1);
	Calcetines.push_back(3);
	Calcetines.push_back(2);

	//Salida de pantalla de los pares de calcetines totales.
	cout << "El numero de pares de calcetines que coinciden son: " << getPares(Calcetines);

	//Imprecion de los calcetines que estan en nuestro vector.
	cout << "\n{";
	for (int i = 0; i < Calcetines.size(); i++) {
		cout << Calcetines[i] << ", ";
	}

	cout << "}\n";

	_getch();
}
