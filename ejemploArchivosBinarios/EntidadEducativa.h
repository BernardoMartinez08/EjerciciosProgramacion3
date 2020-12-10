#pragma once
#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H


struct alumno {
	int cuenta;
	char nombre[20];
	float promedio;
};

struct materia {
	int codigo;
	char nombre[10];
	int UnidadesValorativas;
};

struct nota {
	int cuentaAlumno;
	int codigoClase;
	float nota;
};

class EntidadEducativa {
public:
	static void agregarAlumnos();
	static void consultarAlumnos();

	static void agregarMaterias();
	static void consultarMaterias();

	static void agregarNotas(int,int,float);
	static void consultarNotas();
};

#endif // !UNIVERSIDAD_H
