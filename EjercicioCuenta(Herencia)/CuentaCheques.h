#pragma once
#ifndef CUENTA_CHEQUES_H
#define	CUENTA_CHEQUES_H

#include "Cuenta.h"

class CuentaCheques : public Cuenta {
public:
	CuentaCheques(double, double);
	void abonar(double);
	bool cargar(double);
private:
	double cuotaTransaccion;
	void cargarCuotaTransaccion();
};
#endif // !CUENTA_CHEQUES_H
