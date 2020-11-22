#include "Caja.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main() {

	//Agegamos 4 Cajas diferentes en la cual 1 tiene un error de creacion un largo de 0.
	cout << "AGREGANDO CAJA1....... \n";
	Caja Caja1;
	cout << "AGREGANDO CAJA2....... \n";
	Caja Caja2(10, 6, 12);
	cout << "AGREGANDO CAJA3....... \n";
	Caja Caja3(0, 2, 8);
	cout << "AGREGANDO CAJA4....... \n";
	Caja Caja4(5, 4, 2);


	//Imprimimos los datos de las cajas creadad anteriormente con las funciones getLargo, getAncho, y getAlto.
	cout << "\nDatos de Caja1:\nLargo: " << Caja1.getLargo() << "\nAncho: " << Caja1.getAncho() << "\nAlto: " << Caja1.getAlto() << "\n\n";
	cout << "Datos de Caja2:\nLargo: " << Caja2.getLargo() << "\nAncho: " << Caja2.getAncho() << "\nAlto: " << Caja2.getAlto() << "\n\n";
	cout << "Datos de Caja3:\nLargo: " << Caja3.getLargo() << "\nAncho: " << Caja3.getAncho() << "\nAlto: " << Caja3.getAlto() << "\n\n";
	cout << "Datos de Caja4:\nLargo: " << Caja4.getLargo() << "\nAncho: " << Caja4.getAncho() << "\nAlto: " << Caja4.getAlto() << "\n\n";

	//Modificamos el Largo,Ancho y Alto de la Caja1 con las funciones setLargo, setAncho, y setAlto.
	Caja1.setLargo(16);
	Caja1.setAncho(10);
	Caja1.setAlto(5);

	//Imprimimos los datos de la Caja1 actualizados luego de los cambios.
	cout << "\nDatos de Caja1 Actualizados:\nLargo: " << Caja1.getLargo() << "\nAncho: " << Caja1.getAncho() << "\nAlto: " << Caja1.getAlto() << "\n\n";


	//Imprimimos en pantalla el volumen de las cajas, haciendo uso de la funcion obtener volumen de cada una.
	cout << "\nVolumen de Caja1: " << Caja1.obtenerVolumen();
	cout << "\nVolumen de Caja2: " << Caja2.obtenerVolumen();
	cout << "\nVolumen de Caja3: " << Caja3.obtenerVolumen();
	cout << "\nVolumen de Caja4: " << Caja4.obtenerVolumen();

	cout << "\n";

	//Creamos una Caja5 que sera la suma de dos cajas la Caja1 + Caja4
	Caja Caja5;
	Caja5 = Caja1 + Caja4;

	//Imprimimos datos y volumen de esa caja creada a partir de la suma de las otras dos con las funciones correspondientes.
	cout << "\nDatos de Caja5:\nLargo: " << Caja5.getLargo() << "\nAncho: " << Caja5.getAncho() << "\nAlto: " << Caja5.getAlto() << "\n\n";
	cout << "\nVolumen de Caja5: " << Caja5.obtenerVolumen();

	cout << "\n";
	_getch();
}