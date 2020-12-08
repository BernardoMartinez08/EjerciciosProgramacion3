#include "Empresa.h"
#include <fstream>
#include <iostream>
using namespace std;

/*Funcion AgergarEmpleados que haciendo uso de archivos de texto guarda los datos del empleado en el.*/
void Empresa::agregarEmpleados() {
	//Abrimos nuestro archivo .dat y que se pueda escribir al final del mismo sin sobreescritura
	ofstream archivoEmpleado("empleados.dat",ios::app);

	//Verificamos que se abrio el archivo correctamente
	if (!archivoEmpleado) {
		cout << "ERROR! al intentar abrir archivo .dat\n";
		return;
	}

	//Solicitamos la cantidad de empleados a incresar.
	int cantidadEmpleados = 0;
	cout << "Ingrese cantidad de empleados a agregar: ";
	cin >> cantidadEmpleados;

	//Atributos de codigo, nombre y salario del empleado.
	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "\n\n *** I N G R E S O  D E  E M P L E A D O S ***\n\n";
	
	/*En este for solicitamos los datos de todos los empleados al usuario para poderlos guardar en nuestro archivo.*/
	for (int i = 0; i < cantidadEmpleados;i++) {
		cout << "EMPLEADO " << (i + 1) << ": \n";

		cout << "Ingrese Codigo de Empleado: ";
		cin >> codigoEmpleado;

		cout << "Ingrese Nombre de Empleado: ";
		cin >> nombreEmpleado;

		cout << "Ingrese Salario de Empleado: ";
		cin >> salarioEmpleado;

		//Luego de la lectura ingresamos los datos seguidos de un salto de linea.
		archivoEmpleado << codigoEmpleado << " " << nombreEmpleado << " " << salarioEmpleado << "\n";
		
		cout << "Empleado Almacenado!\n\n";
	}

	//Cerramos nuestro archivo.
	archivoEmpleado.close();
}

/*Funcion de ImprimirEmpleados que abre un archivo de texto solo que a diferencia del anterior este es para lectura de datos.*/
void Empresa::imprimirEmpleados() {
	//Abrimos nuestro archivo de lectura.
	ifstream archivoEmpleados("empleados.dat",ios::in);

	//Verificamos que se abrio correctamente.
	if (!archivoEmpleados) {
		cout << "ERROR! al intentar abrir archivo .dat\n";
		return;
	}

	cout << "\n\n *** C O N S U L T A  D E  E M P L E A D O S ***\n\n";

	//Atributos de codigo, nombre y salario del empleado.
	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "Codigo\tNombre\tSalario\t\n";

	//En el while realizamos la lectura de los datos del empleado y los almacenamos e su variable correspondiente, posteriormente los
	//mostramos en pantalla.
	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {
		cout << codigoEmpleado << "\t" << nombreEmpleado << "\t" << salarioEmpleado << "\n";
	}

	//Cerramos nuestro archivo.
	archivoEmpleados.close();
}


/*En esta funcion CrearArbol hacemos un proceso parecido al de imprimir el documento pero en lugar de mostrar los datos en pantalla directamebte
pasamos a agregra empleados a las ramas de un arbol.*/
ArbolEmpleados Empresa::crearArbol() {
	//Abrimos nuestro archivo de empleados para lectura y cremos un arbol en el cual ingresaremos dichos empleados.
	ifstream archivoEmpleados("empleados.dat", ios::in);
	ArbolEmpleados arbolEmpleados;

	//Verificamos la correcta apertura del archivo.
	if (!archivoEmpleados) {
		cout << "ERROR! al intentar abrir archivo .dat\n";
	}

	//Atributos de codigo, nombre y salario del empleado.
	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	//En el While entonces pasamos a crear una nueva rama a partir de los parametros extraidos del documento.
	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) {
		arbolEmpleados.agregarEmpleados(codigoEmpleado,nombreEmpleado,salarioEmpleado);
	}

	//Cerramos el archivo y retornamos el arbol.
	archivoEmpleados.close();
	return arbolEmpleados;

}