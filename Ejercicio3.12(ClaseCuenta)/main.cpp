#include <iostream>
#include <conio.h>

#include "Cuenta.h"

using std::cout;

int main() {
	//Creo una cuenta1 con un saldo correcto y muestro el saldo actual
	Cuenta cuenta1(5000);
	cout << "Su saldo es: " << cuenta1.obtenerSaldo() << "\n\n";

	//Creo una cuenta2 con un saldo incorrecto y muestro el saldo actual
	Cuenta cuenta2(-700);
	cout << "Su saldo es: " << cuenta2.obtenerSaldo() << "\n\n";

	//Abono a cuenta1 un monto que se suma al saldo y muestro el saldo actualizado
	cuenta1.Abonar(400);
	cout << "Su saldo actual se actualizo a: " << cuenta1.obtenerSaldo() << "\n\n";

	//Abono a cuenta2 un monto que se suma al saldo y muestro el saldo actualizado
	cuenta2.Abonar(3400);
	cout << "Su saldo actual se actualizo a: " << cuenta2.obtenerSaldo() << "\n\n";

	//Cargo un monto dentro del limite del saldo y muestro el saldo actual
	cuenta1.Cargar(1000);
	cout << "Su saldo actual se actualizo a: " << cuenta1.obtenerSaldo() << "\n\n";

	//Intento cragar un monto superir al limite y muestro el saldo actual
	cuenta2.Cargar(5000);
	cout << "Su saldo actual se actualizo a: " << cuenta2.obtenerSaldo() << "\n\n";

	_getch();
}
