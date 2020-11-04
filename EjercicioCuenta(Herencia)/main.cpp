#include <iostream>
#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"

using namespace std;

int main()
{
	Cuenta cuenta1(50.0);
	CuentaAhorros cuenta2(25.0, .03);
	CuentaCheques cuenta3(80.0, 1.0);

	//cout << fixed << setprecision(2);

	// Imprimiendo saldos iniciales por cada cuenta
	cout << "cuenta1 saldo: L" << cuenta1.obtenerSaldo() << endl;
	cout << "cuenta2 saldo: L" << cuenta2.obtenerSaldo() << endl;
	cout << "cuenta3 saldp: L" << cuenta3.obtenerSaldo() << endl;

	cout << "\nIntentado abonar L25.0 desde cuenta1." << endl;
	cuenta1.Abonar(25.0);
	cout << "\nIntentado abonar L30.0 desde cuenta2." << endl;
	cuenta2.Abonar(30.0);
	cout << "\nIntentado abonar L40.0 desde cuenta3." << endl;
	cuenta3.abonar(40.0);

	// Imprimiendo saldos actualizados
	cout << "\ncuenta1 saldo: L" << cuenta1.obtenerSaldo() << endl;
	cout << "cuenta2 saldo: L" << cuenta2.obtenerSaldo() << endl;
	cout << "cuenta3 saldo: L" << cuenta3.obtenerSaldo() << endl;

	cout << "\nCargando L40 a cuenta1." << endl;
	cuenta1.Cargar(40.0);
	cout << "\nCargando L65.00 a cuenta2." << endl;
	cuenta2.Cargar(65.0);
	cout << "\nCargando L20.00 a cuenta3." << endl;
	cuenta3.cargar(20.0);

	// Imprimiendo saldos actualizados
	cout << "\ncuenta1 saldo: L" << cuenta1.obtenerSaldo() << endl;
	cout << "cuenta2 saldo: L" << cuenta2.obtenerSaldo() << endl;
	cout << "cuenta3 saldo: L" << cuenta3.obtenerSaldo() << endl;

	// agregar intereses a objeto cuenta2 CuentaAhorros 
	double interesesGanados = cuenta2.calcularInteres();
	cout << "\nAgregando L" << interesesGanados << " intereses a cuenta2." << endl;
	cuenta2.Cargar(interesesGanados);

	cout << "\nNuevo saldo cuenta2: L" << cuenta2.obtenerSaldo() << endl;

	_getch();
}