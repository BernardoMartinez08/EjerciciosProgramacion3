#include <iostream>
#include <conio.h>
#include <vector>

#include "Figura2D.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"
#include "Circulo.h"
#include "Rombo.h"

using namespace std;

int main() {
	//Crear un arreglo que apunta a Figuras2D de tamano 4
	//estructura de tamano fijo
	Figura2D* Figuras[4];

	Figuras[0] = new Rectangulo(4, 1);
	Figuras[1] = new TrianguloRectangulo(5, 3);
	Figuras[2] = new Rectangulo(4, 3);
	Figuras[3] = new TrianguloRectangulo(6, 2);

	for (int i = 0; i < 4; i++) {
		Figuras[i]->imprimirFigura();
	}

	std::cout << "\nSe imprime pisicoon 0 del arreglo: ";

	//casteo de una instancia de Rectangulo
	((Rectangulo*)Figuras[0])->setBase(5);
	((Rectangulo*)Figuras[0])->setAltura(3);
	((Rectangulo*)Figuras[0])->imprimirFigura();

	//Creacion de un arreglo dinamico de Figuras2D

	std::cout << "\n\nElementyos en Arreglo Diamico\n\n";

	vector<Figura2D*> listaFiguras;

	listaFiguras.push_back(new Rectangulo(8, 3));
	listaFiguras.push_back(new TrianguloRectangulo(9, 4));

	cout << "Cantidad de Elementos en lista de Figuras: " << listaFiguras.size() << "\n\n";

	for (int i = 0; i < listaFiguras.size(); i++) {
		listaFiguras[i]->imprimirFigura();
	}

	/*Modificar todas las instancias de TrinaguloRectangulo y que su base se aumente +6
	y su altura + 2*/

	//Determine con codigo cuantas instancias de TrianguloRectangulo Existen

	int cantidadTR = 0;
	for (int i = 0; i < 4; i++) {
		if (Figuras[i]->getTipo() == TipoFigura::tTrianguloRectangulo) {
			cantidadTR++;
			TrianguloRectangulo* tr = (TrianguloRectangulo*)Figuras[i];
			tr->setBase(tr->getBase() + 6);
			tr->setAltura(tr->getAltura() + 2);

			//((TrianguloRectangulo*)Figuras[i])->setBase(((TrianguloRectangulo*)Figuras[i])->getBase() + 6);
			//((TrianguloRectangulo*)Figuras[i])->setAltura(((TrianguloRectangulo*)Figuras[i])->getAltura() + 2);
		}
	}

	cout << "\n\n";

	for (int i = 0; i < 4; i++) {
		Figuras[i]->imprimirFigura();
	}

	cout << "\n\nCantidad de TriangulosRectangulos: " << cantidadTR << "\n";


	//Creacion de menu
	//El entero opcion que sera el que maneje nuestro menu y el entero figurasagrgadas que nos contabiliza la
	//cantidad de figuras agregadas y el arreglo de figuras2D de 20 espacios.

	int opcion = 0, figurasAgregadas = 0;
	Figura2D* Figuras2D[20];

	//Nuestro menu se ejecutara siempre que la opcion ingresada sea diferentre de 5 que no sobrepase el limite de figuras(20)
	while (opcion != 5 && figurasAgregadas < 20) {
		/*Al comienzo los especifica cuatos espacios para figuras existen para comenzar a agregar, posteriormente nos muestra
		las opciones que tenemos disponibles para agregar distintas figuras, y una opcion para salir del menu, seguido de la 
		lectura de la seleccion*/

		cout << "\nEspacios Disponibles: " << (20-figurasAgregadas);

		cout << "\n\n******MENU DE OPCIONES******\n"
			<< "1.Agregar un nuevo Rectangulo.\n"
			<< "2.Agregar un nuevo Triangulo Rectangulo.\n"
			<< "3.Agregar un nuevo Circulo.\n"
			<< "4.Agregar un nuevo Rombo.\n"
			<< "5.Salir.\n";

		cout << "Elije una opcion: ";
		cin >> opcion;

			switch (opcion){
				/*En un switch de la opcion veremos que opcion eligio el usuario y asi haremos lo correspondiente*/
			case 1: {
				/*La primera opcion que es agregar un Rectangulo, proseguimos a pedir los datos necesarios(base y altura)
				para posteriormete agregar un nuevo rectangulo a nuestro arreglo y aumentar las figuras agregadas*/

				int base, altura;
				cout << "\n\n1.Agregar un nuevo Rectangulo.\nIngresa la Base del Rectangulo: ";
				cin >> base;

				cout << "\nIngresa la Altura del Rectangulo: ";
				cin >> altura;

				Figuras2D[figurasAgregadas] = new Rectangulo(base, altura);
				figurasAgregadas++;
				break;
			}

			case 2: {
				/*La segunda opcion que es agregar un Trinagulo Rectangulo, proseguimos a pedir los datos necesarios
				(base y altura)para posteriormete agregar un nuevo triangulorectangulo a nuestro arreglo y aumentar
				las figuras agregadas*/

				int base, altura;
				cout << "\n\n1.Agregar un nuevo Triangulo Rectangulo.\nIngresa la Base del Triangulo Rectangulo: ";
				cin >> base;

				cout << "\nIngresa la Altura del Triangulo Rectangulo: ";
				cin >> altura;

				Figuras2D[figurasAgregadas] = new TrianguloRectangulo(base, altura);
				figurasAgregadas++;
				break;
			}
			case 3: {
				/*La tercera opcion que es agregar un circulo para el cual, proseguimos a pedir los datos necesarios
				(radio)para posteriormete agregar un nuevo circulo a nuestro arreglo y aumentar las figuras agregadas*/

				float radio;
				cout << "\n\n1.Agregar un nuevo Circulo.\nIngresa el Radio del Circulo: ";
				cin >> radio;

				Figuras2D[figurasAgregadas] = new Circulo(radio);
				figurasAgregadas++;
				break;
			}

			case 4: {
				/*La cuarta opcion que es agregar un Rompo, proseguimos a pedir los datos necesarios
				(la longitud de sus lados y el angulo formado en la union de sus lados)para posteriormete 
				agregar un nuevo rombo a nuestro arreglo y aumentar las figuras agregadas*/

				int longitud;
				float angulo;
				cout << "\n\n1.Agregar un nuevo Rombo.\nIngresa la Longitud de los lados del Rombo: ";
				cin >> longitud;

				cout << "\nIngresa el Angulo formado: ";
				cin >> angulo;

				Figuras2D[figurasAgregadas] = new Rombo(longitud, angulo);
				figurasAgregadas++;
				break;
			}
				  
			case 5:
				/*La opcion 5 es salir nos indica cuantas figuras agregamos en total*/

				cout << "\n\nSaliendo.......\nAgregaste: " << figurasAgregadas << "\n\n";
				break;

			default:
				//En caso que seleccione una opcion que no esta dentro de las soportadas

				cout << "\n\nINCORRECTO!!!! INTENTE OTRA OPCION\n\n";
				break;
			}

			/*En el caso de llenar el arreglo se le indica al usuario que solo tiene una plaza mas
			antes que se llene el mismo*/
			if (figurasAgregadas == 19) {
				cout << "\n\nSOLO TE QUEDA UN ESPACIO MAS PARA FIGURAS!!!!\n";
			}
	}


	/*Ya sea este lleno o no nuestro arreglo, haciendo uso de figuras Agregadas imprimimos todos los datos
	de las figuras que fueron agregadas precedidas de el numero de posiocion mas 1, de no haber datos no imprime nada.*/
	for (int i = 0; i < figurasAgregadas; i++) {
		cout << i+1 << ". ";
		Figuras2D[i]->imprimirFigura();
	}

	_getch();
}