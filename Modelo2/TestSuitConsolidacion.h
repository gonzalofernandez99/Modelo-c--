#ifndef TESTSUITCONSOLIDACION_H_
#define TESTSUITCONSOLIDACION_H_

namespace TestSuitConsolidacion{
	typedef char** (*funcionExpandirCadena)(char* cadena, int factorExpancion);
	void Ejecutar(funcionExpandirCadena funcionParaTestear);
}


#endif
