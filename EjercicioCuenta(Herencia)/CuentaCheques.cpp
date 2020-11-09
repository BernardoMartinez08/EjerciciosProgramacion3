#include "CuentaCheques.h"
#include <iostream>

using namespace std;

/*Esta cuenta al heredar de Cuenta tiene todas la funciones de dicha clase y a diferencia de
cuentaAhorro esta cuenta si hace un breve cambio en las funciones cargar y abonar en el cual
ademas de lo que hace el padre carga una cuota de transaccion a la cuenta.*/

/*Constructor de la clase que recibe como parametro el valor double del saldo de la cuenta, pero adicional
se necesita el valor double de la cuenta de transaccion que es propia de la clase hijo.*/
CuentaCheques::CuentaCheques(double _saldoInicial, double _cuotaTrans) : Cuenta(_saldoInicial),cuotaTransaccion(_cuotaTrans){
	/*Verificamos que dicho valor recibido sea mayor o igual a 0 ya que no existe
	cuota de transaccion negativa de serlo se procede, si es una cuota negativa se 
	indica error.*/
	if (_cuotaTrans >= 0) {
		cuotaTransaccion = _cuotaTrans;
	}
	else
		throw invalid_argument("Cueota Ingresada no es valida, La cuota de Transaccion debe ser >= a 0");
}

/*Funcion cargar cuota de transaccion que toma la funcion padre actualizar saldo para
con ayuda de la tambien funcion del padre obtener saldo restarle la cuota de transaccion
y con ello actualizando al saldo.*/
void CuentaCheques::cargarCuotaTransaccion() {
	actualizarSaldo((obtenerSaldo() - cuotaTransaccion));
	cout << "L. " << cuotaTransaccion << " cuota transaccion cargada.\n";
}

/*Redefinicion de funcion abonar que con ayuda de la funcion padre abona a la cuenta un monto
e inmediato carga la cuota de transaccion correspondiente*/
void CuentaCheques::abonar(double cantidad) {
	Cuenta::Abonar(cantidad);
	cargarCuotaTransaccion();
}

/*Redefinicion de funcion cargar que con ayuda de la funcion padre carga a la cuenta un monto
e inmediato carga la cuota de transaccion correspondiente si la carga se valida como realizada*/
bool CuentaCheques::cargar(double cantidad) {
	if (Cuenta::Cargar(cantidad) == true) {
		cargarCuotaTransaccion();
		return true;
	}
	return false;
}