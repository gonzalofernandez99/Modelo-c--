#ifndef TESTSUITCONSOLIDACION_H_
#define TESTSUITCONSOLIDACION_H_

namespace TestSuitConsolidacion{
	typedef int (*FuncionContarAparicionesSubliminales)(const char*, const char*);
	void EjecutarPruebasUnitarias(FuncionContarAparicionesSubliminales contar);
}

#endif
