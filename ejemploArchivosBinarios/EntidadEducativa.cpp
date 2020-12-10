#include "EntidadEducativa.h"
#include <fstream>
#include <iostream>
using namespace std;

void EntidadEducativa::agregarAlumnos() {
	ofstream alumnoFile("alumnos.bin", ios::out | ios::app | ios::binary);

	if (!alumnoFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << " ***** I N G R E S O  D E  A L U M N O S ***** \n\n";

	cout << "Indique cantidad de alumnos a ingresar: ";
	int cantidadAlumnos = 0;
	cin >> cantidadAlumnos;

	alumno nuevo;

	for (int i = 0; i < cantidadAlumnos; i++) {
		cout << "\nAlumno " << (i + 1) << ": \n";

		cout << "Indique numero de Cuenta del Alumno: ";
		cin >> nuevo.cuenta;

		cout << "Indique el nombre del Alumno:";
		cin >> nuevo.nombre;

		nuevo.promedio = 0;

		alumnoFile.write(reinterpret_cast<const char*>(&nuevo),sizeof(alumno));
	}

	alumnoFile.close();
}

void EntidadEducativa::consultarAlumnos() {
	ifstream alumnosFile("alumnos.bin", ios::in | ios::binary);
	
	if (!alumnosFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << " ***** C O N S U L T A  D E  A L U M N O S ***** \n\n";

	int posicionLectura = alumnosFile.tellg();
	alumnosFile.seekg(0,ios::beg);

	alumno actual;
	alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));

	while (!alumnosFile.eof()) {
		cout << "Alumno { Posicion: " << posicionLectura << "\tCuenta: " << actual.cuenta << ",\tNombre: " << actual.nombre << ", Promedio: " << actual.promedio << " }\n";
		
		posicionLectura = alumnosFile.tellg();
		alumnosFile.read(reinterpret_cast<char*>(&actual), sizeof(alumno));
	}

	alumnosFile.close();
}

void EntidadEducativa::agregarMaterias() {
	ofstream materiasFile("materias.bin", ios::out | ios::app | ios::binary);

	if (!materiasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << " ***** I N G R E S O  D E  M A T E R I A S ***** \n\n";

	cout << "Indique cantidad de materias a ingresar: ";
	int cantidadMaterias = 0;
	cin >> cantidadMaterias;

	materia nuevo;

	for (int i = 0; i < cantidadMaterias; i++) {
		cout << "\nMateria " << (i + 1) << ": \n";

		cout << "Indique el Codigo de la Materia: ";
		cin >> nuevo.codigo;

		cout << "Indique el Nombre de la Materia:";
		cin >> nuevo.nombre;

		cout << "Indique las Unidades Valorativas de la Materia:";
		cin >> nuevo.UnidadesValorativas;

		materiasFile.write(reinterpret_cast<const char*>(&nuevo), sizeof(materia));
	}

	materiasFile.close();
}

void EntidadEducativa::consultarMaterias() {
	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	if (!materiasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << " ***** C O N S U L T A  D E  M A T E R I A S ***** \n\n";

	materiasFile.seekg(0, ios::beg);

	materia actual;
	materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	
	while (!materiasFile.eof()) {
		cout << "Materia { Codigo: " << actual.codigo << ",\tNombre: " 
			 << actual.nombre << ", UV's: " << actual.UnidadesValorativas << " }\n";

		materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	}

	materiasFile.close();
}

void EntidadEducativa::agregarNotas(int _cuentaAlu, int _codigoClas, float _nota) {
	ifstream alumnosFile("alumnos.bin", ios::in | ios::binary);
	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	ofstream notasFile("notas.bin", ios::out | ios::app | ios::binary);

	if (!materiasFile || !alumnosFile || !notasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	bool alumnoFound = false , classFound = false;

	alumnosFile.seekg(0, ios::beg);

	alumno actualAlumno;
	alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));

	while (!alumnosFile.eof()) {
		if (actualAlumno.cuenta == _cuentaAlu)
			alumnoFound = true;

		alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));
	}

	materiasFile.seekg(0, ios::beg);

	materia actualClase;
	materiasFile.read(reinterpret_cast<char*>(&actualClase), sizeof(materia));

	while (!materiasFile.eof()) {
		if (actualClase.codigo = _codigoClas)
			classFound = true;

		materiasFile.read(reinterpret_cast<char*>(&actualClase), sizeof(materia));
	}

	nota nuevaNota;

	if (alumnoFound == true && classFound == true) {
		nuevaNota.codigoClase = _codigoClas;
		nuevaNota.cuentaAlumno = _cuentaAlu;
		nuevaNota.nota = _nota;

		notasFile.write(reinterpret_cast<const char*>(&nuevaNota), sizeof(nota));
	}


	materiasFile.close();
	alumnosFile.close();
	notasFile.close();
}

void EntidadEducativa::consultarNotas() {
	ifstream notasFile("notas.bin", ios::in | ios::binary);

	if (!notasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << "\n\n ***** C O N S U L T A  D E  N O T A S ***** \n\n";

	notasFile.seekg(0, ios::beg);

	nota actual;
	notasFile.read(reinterpret_cast<char*>(&actual), sizeof(nota));

	while (!notasFile.eof()) {
		cout << "Nota { Alumno: " << actual.cuentaAlumno << ",\Clase: "
			<< actual.codigoClase << ", Nota Asignada: " << actual.nota << " }\n";

		notasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	}

	notasFile.close();
}