#ifndef TESTSUITCONSOLIDACION_H_
#define TESTSUITCONSOLIDACION_H_

#include "Arbol.h"

namespace TestSuitConsolidacion{
	typedef int (*TipoFuncionObtenerEnesimo)(Arbol* arbol, int enesimo);
	void EjecutarPruebasUnitarias(TipoFuncionObtenerEnesimo obtenerEnesimo);
}

#endif
