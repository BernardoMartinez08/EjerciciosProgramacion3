#include "CuentaCheques.h"
#include <iostream>

using namespace std;

CuentaCheques::CuentaCheques(double _saldoInicial, double _cuotaTrans) : Cuenta(_saldoInicial),cuotaTransaccion(_cuotaTrans){
	if (_cuotaTrans >= 0) {
		cuotaTransaccion = _cuotaTrans;
	}
	else
		throw invalid_argument("Cueota Ingresada no es valida, La cuota de Transaccion debe ser >= a 0");
}

void CuentaCheques::cargarCuotaTransaccion() {
	actualizarSaldo((obtenerSaldo() - cuotaTransaccion));
	cout << "L. " << cuotaTransaccion << " cuota transaccion cargada.\n";
}

void CuentaCheques::abonar(double cantidad) {
	Cuenta::Abonar(cantidad);
	cargarCuotaTransaccion();
}

bool CuentaCheques::cargar(double cantidad) {
	if (Cuenta::Cargar(cantidad) == true) {
		cargarCuotaTransaccion();
		return true;
	}
	return false;
}