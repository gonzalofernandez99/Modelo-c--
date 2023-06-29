#include "Cuenta.h"

using TDACuenta::Cuenta;

namespace TDATransaccion {
	struct Transaccion;

	Transaccion* Crear(Cuenta* origen, Cuenta* destino, double monto);
	int ObtenerId(const Transaccion* transaccion);
	double ObtenerMonto(const Transaccion* transaccion);
	Cuenta* ObtenerCuentaOrigen(const Transaccion* transaccion);
	Cuenta* ObtenerCuentaDestino(const Transaccion* transaccion);

	void DestruirTransaccion(Transaccion* transaccion);
}
