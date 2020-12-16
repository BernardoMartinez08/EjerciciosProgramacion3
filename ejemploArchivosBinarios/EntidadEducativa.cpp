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

bool EntidadEducativa::existeAlumno(int _Cuenta) {
	ifstream alumnosFile("alumnos.bin", ios::in | ios::binary);

	if (!alumnosFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return false;
	}

	alumnosFile.seekg(0, ios::beg);

	alumno actualAlumno;
	alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));

	while (!alumnosFile.eof()) {
		if (actualAlumno.cuenta == _Cuenta) {
			alumnosFile.close();
			return true;
		}

		alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));
	}

	alumnosFile.close();
	return false;
}

bool EntidadEducativa::existeClase(int _Codigo) {
	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	if (!materiasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return false;
	}

	materiasFile.seekg(0, ios::beg);

	materia actualClase;
	materiasFile.read(reinterpret_cast<char*>(&actualClase), sizeof(materia));

	while (!materiasFile.eof()) {
		if (actualClase.codigo = _Codigo) {
			materiasFile.close();
			return true;
		}

		materiasFile.read(reinterpret_cast<char*>(&actualClase), sizeof(materia));
	}

	materiasFile.close();
	return false;
}

void EntidadEducativa::agregarNotas(int _cuentaAlu, int _codigoClas, float _nota) {
	ofstream notasFile("notas.bin", ios::out | ios::app | ios::binary);

	if (!notasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	nota nuevaNota;

	if (existeAlumno(_cuentaAlu) == true && existeClase(_codigoClas)) {
		nuevaNota.codigoClase = _codigoClas;
		nuevaNota.cuentaAlumno = _cuentaAlu;
		nuevaNota.nota = _nota;

		notasFile.write(reinterpret_cast<const char*>(&nuevaNota), sizeof(nota));
		actualizarPromedio(_cuentaAlu);
	}

	notasFile.close();
}

void EntidadEducativa::consultarNotas() {
	ifstream notasFile("notas.bin", ios::in | ios::binary);

	if (!notasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	cout << " ***** C O N S U L T A  D E  N O T A S ***** \n\n";

	notasFile.seekg(0, ios::beg);

	nota actual;
	notasFile.read(reinterpret_cast<char*>(&actual), sizeof(nota));

	while (!notasFile.eof()) {
		cout << "Nota { Alumno: " << actual.cuentaAlumno << ",\tClase: "
			<< actual.codigoClase << ", Nota: " << actual.nota << " }\n";

		notasFile.read(reinterpret_cast<char*>(&actual), sizeof(nota));
	}

	notasFile.close();
}

int EntidadEducativa::obtenerUV(int _Codigo) {
	ifstream materiasFile("materias.bin", ios::in | ios::binary);

	if (!materiasFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return -1;
	}

	materiasFile.seekg(0, ios::beg);

	materia actual;
	materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));

	while (!materiasFile.eof()) {
		if (actual.codigo = _Codigo) {
			materiasFile.close();
			return actual.UnidadesValorativas;
		}

		materiasFile.read(reinterpret_cast<char*>(&actual), sizeof(materia));
	}

	materiasFile.close();
	return -1;
}

void EntidadEducativa::actualizarPromedio(int _cuentaAlum) {
	ifstream notasFile("notas.bin", ios::in | ios::binary);
	fstream alumnosFile("alumnos.bin", ios::out | ios::in | ios::binary);

	if (!notasFile || !alumnosFile) {
		cout << "Error al intentar abrir el archivo .bin\n\n";
		return;
	}

	notasFile.seekg(0, ios::beg);

	nota actual;
	float totalNotas = 0;
	int totalUV = 0;

	notasFile.read(reinterpret_cast<char*>(&actual), sizeof(nota));

	while (!notasFile.eof()) {
		if (actual.cuentaAlumno == _cuentaAlum) {
			int UV = obtenerUV(actual.codigoClase);

			totalNotas += (actual.nota * UV);
			totalUV += UV;
		}

		notasFile.read(reinterpret_cast<char*>(&actual), sizeof(nota));
	}

	notasFile.close();

	float promedio = totalNotas / totalUV;

	int posicionLectura = alumnosFile.tellg();
	alumnosFile.seekg(0, ios::beg);

	alumno actualAlumno;
	alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));

	while (!alumnosFile.eof()) {
		if (actualAlumno.cuenta == _cuentaAlum) {
			actualAlumno.promedio = promedio;
			alumnosFile.seekg(posicionLectura);
			alumnosFile.write(reinterpret_cast<const char*>(&actualAlumno), sizeof(alumno));
		}
		alumnosFile.read(reinterpret_cast<char*>(&actualAlumno), sizeof(alumno));
		posicionLectura = alumnosFile.tellg();
	}

	alumnosFile.close();
}