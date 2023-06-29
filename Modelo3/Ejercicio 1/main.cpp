#include <iostream>
#include "Arbol.h"
#include "TestSuitConsolidacion.h"

using namespace std;

// Precondicion: @arbol es un arbol binario de búsqueda
// Poscondicion: Devuelve el elemento que se encuentra en la posicion
// indicada en @enesimo. La posicion 0 corresponde al elemento menor del arbol
// la posicion 1 corresponde al elemento que le sigue en orden al elemento en posicion 0 y asi sucesivamente
// Si @enesimo es menor que cero o un numero mayor o igual al tamaño del arbol
// devuelve la constante ItemInvalido
int ObtenerEnesimo(Arbol* arbol, int enesimo);

int main() {
	TestSuitConsolidacion::EjecutarPruebasUnitarias(ObtenerEnesimo);
	return 0;
}

int ObtenerEnesimo(Arbol* arbol, int enesimo){
	return 0;
}
