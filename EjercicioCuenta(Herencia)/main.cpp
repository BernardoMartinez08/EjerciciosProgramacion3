#include <iostream>
#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"

using namespace std;

/*Cree una jerarquia de herencia que podria usar en el banco para representar las cuentas bancarias
de los clientes.Todos los clientes en este banco pueden depositar (es decir abonar) dinero en sus cuentas
u retirar (es decir, cargar) dinero de ellas. Tambien existen tipos mas especificos de cuentas. Por ejemplo,
las cuentas de ahorro obtienen intereses sobre el dinero que contienen. Por otro lado, las cuentas de cheques
cobran uan cuenta oir transacccion(es decir, abono o cargo).

Cree una gerarquia de herencia quye contenga la clase base cuenta, junto con las clases derivadas CuentaAhorros
y CuentaChequesque hetedad de la clase Cuenta.La clase base Cuenta tiene que incluir un miembro de datso de tipo
double para representar el saldo de la cuenta. La clasedebe proporcionar un constructor que reciba un saldo inicial
y lo utilice pata incializar el miembro de datos.El constructor debe validar el saldo inicial, para asegurar que sea 
mayor o igual a 0.0. De no ser asi, el saldo debe establecerse en 0.0 y el constructor debe mostrar un mensaje de 
error, indicando que el saldo inicial es invalido. La clase debe proporcionar tres funciones miembros. La funci�n 
miembro abonar debe sumar un monto al saldo actual. La funci�n miembro cargar debe retirar dinero de la Cuenta y 
asegurar que el monto a cargar ni exceda el saldo de la Cuenta. So lo hace, el saldo debe permanecer sin cambio y 
la funci�n debe imprimir un menaje �El monto a cargar excedi� el saldo de la cuenta�. La funci�n miembro obtenerSaldo 
debe devolver el saldo actual.

La clase derivad CuentaAhorros debe heredad la funcionalidad de una Cuenta, pero tambi�n debe incluir un miembro de 
tipo double que indique la tasa de inter�s (porcentaje)asignada a la cuenta. El constructor de CuentaAhorros debe 
recibir el saldo inicial, asi como un valor inicial para la tasa de inter�s de la Cuentahorros. CuentaAhorros debe 
proporcionar una funci�n miembro public llamada calcularInteres, que devuelva un valor double que indique el monto 
de inter�s obtenido por la cuenta. La funci�n miembro CalcularInteres debe determinar este monto, multiplicando la 
tasa de inter�s por el saldo de la cuenta. [Nota: CuentaAhorros debe heredar las funciones miembros abonar y cargar 
como est�n, sin redefinirlas.]

La clase derivada CuentaCheques debe heredar de la clase base Cuenta e incluir un miembro de datos adicional de tipo 
double, que represente la cuota que se coba por transacci�n. El constructor de CuentaCheques debe recibir el saldo 
inicial, asi como un par�metro que indique el monto de la cuota. La clase CuentaCheques debe redefinir as funciones 
miembro abonar y cargar de manera que resten la cuota del saldo de la cuenta, cada ves que se realice una de esas 
transacciones con �xito. Las versiones de CuentaCheques de estas funciones deben invocar la versi�n de la clase base 
Cuenta para realizar las actualizaciones en el saldo de la cuenta, La funci�n cargar de CuentaCheques debe cobrar una 
cuota solo si realmente se retir� el dinero (es decir que el monto a cargar no exceda el saldo de la cuenta). 
[Sugerencia: defina la funci�n cargar de Cuneta de manera que devuelva un valor bool que indique si se retiro dinero. 
Despu�s use el valor de retorno para determinar si se debe cobrar la cuota].

Despu�s de definir las clases en esta jerarqu�a, escriba un programa para crear objetos de cada clase y evaluar sus 
funciones miembros. Agregue inter�s al objeto CuentaAhorro, primero invocando a su funci�n calcularInteres y despu�s 
pasando un monto de inter�s devuelto a la funci�n abonar del objeto.*/

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