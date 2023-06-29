#include "Transaccion.h"
#include "Cuenta.h"

using namespace TDACuenta;

int identificadorUnico = 100;

struct TDATransaccion::Transaccion {
	Cuenta* origen;
	Cuenta* destino;
	double monto;
	int id;
};

TDATransaccion::Transaccion* TDATransaccion::Crear(Cuenta* origen, Cuenta* destino, double monto) {
	Transaccion* transaccion = NULL;
	if (TDACuenta::Debitar(origen, monto)) {
		TDACuenta::Acreditar(destino, monto);
		transaccion = new Transaccion;
		transaccion->origen = origen;
		transaccion->destino = destino;
		transaccion->monto = monto;
		transaccion->id = identificadorUnico++;
	}
	
	return transaccion;
}

int TDATransaccion::ObtenerId(const Transaccion* transaccion) {
	return transaccion->id;
}

double TDATransaccion::ObtenerMonto(const Transaccion* transaccion) {
	return transaccion->monto;
}

Cuenta* TDATransaccion::ObtenerCuentaOrigen(const Transaccion* transaccion) {
	return transaccion->origen;
}

Cuenta* TDATransaccion::ObtenerCuentaDestino(const Transaccion* transaccion) {
	return transaccion->destino;
}

void TDATransaccion::DestruirTransaccion(Transaccion* transaccion) {
	delete transaccion;
}