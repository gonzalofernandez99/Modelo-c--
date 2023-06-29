#include <string>

using std::string;

namespace TDACuenta {
	struct Cuenta;
	Cuenta* CrearCuenta(string dueno, double saldoIncial = 0);
	double ObtenerSaldo(const Cuenta* cuenta);
	string ObtenerDueno(const Cuenta* cuenta);
	void Acreditar(Cuenta* cuenta, double monto);
	bool Debitar(Cuenta* cuenta, double monto);
	void DestruirCuenta(Cuenta* cuenta);
}
