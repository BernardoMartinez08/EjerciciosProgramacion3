
#include <iostream>
#include <vector>
#include "Objeto.h"
#include "Cadena.h"
#include "Entero.h"
#include "Logico.h"

using namespace std;

int main() {
	int opc = 0;
	while (opc != 5) {
		cout << "\n\n***M E N U***";

		cout << "\n\n1. Agregar Entero.";
		cout << "\n2. Agregar Logico.";
		cout << "\n3. Agregar Cadena.";
		cout << "\n4. Imprimir total elementos por tipo.";
		cout << "\n5. Salir.";

		cout << "\nIngrese la opcion: ";
		cin >> opc;

		cout << "\nIngrese la opcion: ";
		cin >> opc;

		vector<Objeto*> objetos;

		switch (opc) {
		case 1:
			cout << "\n\nIngresa el Entero: ";
			int entero;
			cin >> entero;


			objetos.push_back(new Entero(entero));
			break;
		case 2:
			cout << "\n\nIngresa el valor Logico: ";
			bool logico;
			cin >> logico;

			objetos.push_back(new Logico(logico));
			break;
		case 3:
			cout << "\n\nIngresa la Cadena: ";
			char cadena[20];
			cin >> cadena;

			objetos.push_back(new Cadena(cadena));
			break;
		case 4:
			int cadenas = 0;
			int enteros = 0;
			int logicos = 0;

			for (int i = 0; i < objetos.size(); i++) {
				objetos[i]->imprimirObjeto();
				if (objetos[i]->getTipoObjeto() == TipoObjeto::tEntero) {
					enteros++;
				}
				else if (objetos[i]->getTipoObjeto() == TipoObjeto::tCadena) {
					cadenas++;
				}
				else if (objetos[i]->getTipoObjeto() == TipoObjeto::tLogico) {
					logicos++;
				}
			}

			cout << "ENTRE LOS OBJETOS HAY: " << enteros << " enteros, " << cadenas << " cadenas, " << logicos << " logicos.";
			break;
		case 5:
			cout << "\n\nSaliendo............";
			break;
		}
	}
}
