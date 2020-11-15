#include <iostream>
#include <conio.h>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCheques.h"
#include <vector>
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
error, indicando que el saldo inicial es invalido. La clase debe proporcionar tres funciones miembros. La función 
miembro abonar debe sumar un monto al saldo actual. La función miembro cargar debe retirar dinero de la Cuenta y 
asegurar que el monto a cargar ni exceda el saldo de la Cuenta. So lo hace, el saldo debe permanecer sin cambio y 
la función debe imprimir un menaje “El monto a cargar excedió el saldo de la cuenta”. La función miembro obtenerSaldo 
debe devolver el saldo actual.

La clase derivad CuentaAhorros debe heredad la funcionalidad de una Cuenta, pero también debe incluir un miembro de 
tipo double que indique la tasa de interés (porcentaje)asignada a la cuenta. El constructor de CuentaAhorros debe 
recibir el saldo inicial, asi como un valor inicial para la tasa de interés de la Cuentahorros. CuentaAhorros debe 
proporcionar una función miembro public llamada calcularInteres, que devuelva un valor double que indique el monto 
de interés obtenido por la cuenta. La función miembro CalcularInteres debe determinar este monto, multiplicando la 
tasa de interés por el saldo de la cuenta. [Nota: CuentaAhorros debe heredar las funciones miembros abonar y cargar 
como están, sin redefinirlas.]

La clase derivada CuentaCheques debe heredar de la clase base Cuenta e incluir un miembro de datos adicional de tipo 
double, que represente la cuota que se coba por transacción. El constructor de CuentaCheques debe recibir el saldo 
inicial, asi como un parámetro que indique el monto de la cuota. La clase CuentaCheques debe redefinir as funciones 
miembro abonar y cargar de manera que resten la cuota del saldo de la cuenta, cada ves que se realice una de esas 
transacciones con éxito. Las versiones de CuentaCheques de estas funciones deben invocar la versión de la clase base 
Cuenta para realizar las actualizaciones en el saldo de la cuenta, La función cargar de CuentaCheques debe cobrar una 
cuota solo si realmente se retiró el dinero (es decir que el monto a cargar no exceda el saldo de la cuenta). 
[Sugerencia: defina la función cargar de Cuneta de manera que devuelva un valor bool que indique si se retiro dinero. 
Después use el valor de retorno para determinar si se debe cobrar la cuota].

Después de definir las clases en esta jerarquía, escriba un programa para crear objetos de cada clase y evaluar sus 
funciones miembros. Agregue interés al objeto CuentaAhorro, primero invocando a su función calcularInteres y después 
pasando un monto de interés devuelto a la función abonar del objeto.*/

int main()
{
	Cuenta cuenta1("A1807", 50.0);
	CuentaAhorros cuenta2("A1808", 25.0, .03);
	CuentaCheques cuenta3("A1809", 80.0, 1.0);

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


	/*Vector de Cuentas donde almacenaremos las diferentes tipos de cuenta*/
	int opcion = 0;
	vector<Cuenta*> Cuentas;

	while (opcion != 7) {
		/*En el ciclo while esta el menu el cual nos permite primero mostrar cuentas cuentas hay en total
		  luego tendremos las opciones disponibles del 1 al 7, crear cuentas, obtener el saldo etc..., las
		  cuales seran todamas y evaluadas en un switch que se encargara de realizar las acciones correspondientes.*/
		cout << "\nCuentas Existentes: " << Cuentas.size();

		cout << "\n\n******MENU DE OPCIONES******\n"
			<< "1.Crear una Nueva Cuenta.\n"
			<< "2.Obtener Saldo de Cuenta.\n"
			<< "3.Abonar a la Cuenta.\n"
			<< "4.Cargar de la Cuenta.\n"
			<< "5.Intereses de la Cuenta.\n"
			<< "6.Numero de Cuentas.\n"
			<< "7.Salir.\n";

		cout << "Elije una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1: {
			/*En el caso uno que es la creacion de cuentas donde necesitaremos especificar algunas
			caracteriticas para crear la cuenta.*/
			int tipoCuenta;
			string NumCuenta;
			double SaldoInicial;

			cout << "\n\n1.Crear una Nueva Cuenta.\n";

			//Solicitamos el ingreso del numero de cuenta.
			cout << "Ingresa el Numero de Cuenta: ";
			cin >> NumCuenta;

			/*Ahora hay que pedirle al usuario que nos especifique el tipo de cuenta*/
			cout << "\n\n1.Cuenta Normal.\t2.Cuenta Ahorros.\t3.Cuenta Cheques.\n";
			cout << "Ingresa el Tipo de Cuenta: ";
			cin >> tipoCuenta;

			/*Con este tipo de cuenta entonces evaluaremos los distintos casos.*/
			if (tipoCuenta == 1) {
				/*En el caso de la Cuenta Normal unicamente necesitamos del saldo
				correspondiente a la cuenta para proceguir con la creacion de la misma.*/
				double tazaInteres;

				cout << "\nIngresa el Saldo Incial de la Cuenta: ";
				cin >> SaldoInicial;

				Cuentas.push_back(new Cuenta(NumCuenta, SaldoInicial));
			}
			else if (tipoCuenta == 2) {
				/*En el caso que se una cuenta de ahorro necesitamos de la taza de interes
				la cual solicitamos al usuario, ademas del saldo para crear la cuenta en nuestro vector.*/
				double tazaInteres;

				cout << "\nIngresa el Saldo Incial de la Cuenta: ";
				cin >> SaldoInicial;

				cout << "\nIngresa la Taza de Intereses: ";
				cin >> tazaInteres;

				Cuentas.push_back(new CuentaAhorros(NumCuenta, SaldoInicial, tazaInteres));
			}
			else if (tipoCuenta == 3) {
				/*en el caso de una cuenta de cheques es necesario una taza o cuota de transacccion entonces
				la solicitamos al usuario ademas del saldo y crea la cuenta en el vectir de cuentas.*/
				double cuotaTrans;

				cout << "\nIngresa el Saldo Incial de la Cuenta: ";
				cin >> SaldoInicial;

				cout << "\nIngresa la Cuota de Transaccion de la cuenta: ";
				cin >> cuotaTrans;

				Cuentas.push_back(new CuentaCheques(NumCuenta, SaldoInicial, cuotaTrans));
			}else
				//Si selecciona un tipo no correspondiente se le indica error.
				cout << "\nNO EXISTE ESTE TIPO DE CUENTA SELECIONA 1, 2 o 3\n\n";

			break;
		}

		case 2: {
			/*En el caso 2 es obtener el saldo de una cuenta en especifico para lo cual tenemos
			que solicitar al usuario un numero de cuenta, el cual sera buscado en nuestro vector
			de ser encontrado actualizamos una variable encontrado si esta es falsa al final mostraremos
			en pantalla un mensaje que no se encontro dicha cuenta.*/
			string NumCuenta;
			bool encontrada = false;
			cout << "\n\n2.Obtener Saldo de Cuenta.\n";

			cout << "\nIngresa el Numero de Cuenta: ";
			cin >> NumCuenta;

			for (int i = 0; i < Cuentas.size(); i++) {
				if (Cuentas[i]->getNumCuenta() == NumCuenta){
					cout << "\nEl SALDO actual de la cuenta es de: " << Cuentas[i]->obtenerSaldo() << "\n\n";
					encontrada == true;
				}
			}

			if(encontrada == false)
				cout << "\nNUMERO DE CUENTA NO VALIDO.\n\n";
			break;
		}

		case 3: {
			/*Para el caso 3 que es abonar a una cuenta necesitaremos ayuda del numero de cuenta el 
			cual sera buscado entre los registros del vector y si se encuentras proceguimos a pedir del
			usuaruio el monto a abonar a dicha cuenta, tambien mostraremos como queda nuestro saldo 
			despues de dicha accion.Si esta cuenta no es encontrada al igual que en casos anteriores se
			muestra un mensaje.*/
			string NumCuenta;
			double monto;
			bool encontrada = false;

			cout << "\n\n3.Abonar a la Cuenta.\n";

			cout << "\nIngresa el Numero de Cuenta: ";
			cin >> NumCuenta;

			for (int i = 0; i < Cuentas.size(); i++) {
				if (Cuentas[i]->getNumCuenta() == NumCuenta) {
					cout << "\nIngresa el Monto a ABONAR en la Cuenta: ";
					cin >> monto;

					Cuentas[i]->Abonar(monto);
					cout << "\nEl SALDO actual de la cuenta es de: " << Cuentas[i]->obtenerSaldo() << "\n\n";
					encontrada = true;
				}
			}

			if (encontrada == false)
				cout << "\nNUMERO DE CUENTA NO VALIDO.\n\n";
			break;
		}

		case 4: {
			/*Para el caso 4 que es cargar a una cuenta necesitaremos ayuda del numero de cuenta el
			cual sera buscado entre los registros del vector y si se encuentras proceguimos a pedir del
			usuaruio el monto a cargar a dicha cuenta, tambien mostraremos como queda nuestro saldo
			despues de dicha accion.Si esta cuenta no es encontrada al igual que en casos anteriores se
			muestra un mensaje.*/
			string NumCuenta;
			double monto;
			bool encontrada = false;

			cout << "\n\n4.Cargar de la Cuenta.\n";

			cout << "\nIngresa el Numero de Cuenta: ";
			cin >> NumCuenta;

			for (int i = 0; i < Cuentas.size(); i++) {
				if (Cuentas[i]->getNumCuenta() == NumCuenta) {
					cout << "\nIngresa el Monto a CARGAR desde la Cuenta: ";
					cin >> monto;

					if (Cuentas[i]->Cargar(monto) == true) {
						cout << "\nEl SALDO actual de la cuenta es de: " << Cuentas[i]->obtenerSaldo() << "\n\n";
					}

					encontrada = true;
				}
			}

			if (encontrada == false)
				cout << "\nNUMERO DE CUENTA NO VALIDO.\n\n";
			break;
		}

		case 5: {
			/*Para el caso 5 necesitamos la ayuda del numero de cuenta, pero en este caso la cuenta
			debe ser de un tipo en especifico para lo cual necesitamos verificar si el numero de cuenta
			perteneces a una cuenta de tipo Ahorro para aplicar sus intereses, para ello usamos la funcion
			gettipo, si es del mismo calculamos sus intereses y mostramos el saldo actualizado de lo contario
			mostramos un mensaje que lo indique. De la misma forma que en casos anteriores si la cuenta no
			se encuentra se le hace saber al usuario.*/
			string NumCuenta;
			bool encontrada = false;

			cout << "\n\n5.Intereses de la Cuenta.\n";

			cout << "\nIngresa el Numero de Cuenta: ";
			cin >> NumCuenta;

			for (int i = 0; i < Cuentas.size(); i++) {
				if (Cuentas[i]->getNumCuenta() == NumCuenta) {
					if (Cuentas[i]->getTipo() == TipoCuenta::tAhorros) {
						CuentaAhorros* CuentaAux = (CuentaAhorros*)Cuentas[i];
						cout << "\nLos INTERESES de la Cuenta son: " << CuentaAux->calcularInteres();
						cout << "\nEl SALDO actual de la cuenta es de: " << Cuentas[i]->obtenerSaldo() << "\n\n";
					}else
						cout << "\nNUMERO DE CUENTA NO VALIDO NO ES TIPO AHORROS.\n\n";

					encontrada = true;
				}
			}

			if (encontrada == false)
				cout << "\nNUMERO DE CUENTA NO VALIDO.\n\n";
			break;
		}
			  
		case 6: {
			/*En el caso 6 necesitamos mostrar el total de cuentas de cada tipo para lo cual
			haciendo uso de la funcion getTipo verficaremos si la cuenta extraida en un for
			del vector corresponde a cuenta normal, ahorro, o cheques aumentado en 1 un entero
			correspodiente a cada tipo, y al final mostraremos el total de cada tipo.*/
			cout << "\n\n6.Numero de Cuentas.\n";

			int numNormales = 0, numAhorro = 0, numCheques = 0;
			for (int i = 0; i < Cuentas.size(); i++) {
				if (Cuentas[i]->getTipo() == TipoCuenta::tAhorros) {
					numAhorro++;
				}else if (Cuentas[i]->getTipo() == TipoCuenta::tCheques) {
					numCheques++;
				}else if (Cuentas[i]->getTipo() == TipoCuenta::tNormal) {
					numNormales++;
				}
			}

			cout << "\nCUENTAS NORMALES: " << numNormales << "\n";
			cout << "\nCUENTAS DE AHORRO: " << numAhorro << "\n";
			cout << "\nCUENTAS DE CHEQUES: " << numCheques << "\n";

			break;
		}
		case 7: {
			cout << "\nSALIENDO..............\n\n";
			break;
		}

		default:{
			//En caso que seleccione una opcion que no esta dentro de las soportadas

			cout << "\n\nINCORRECTO!!!! INTENTE OTRA OPCION\n\n";
			break;
		}

		}
	}

	_getch();
}