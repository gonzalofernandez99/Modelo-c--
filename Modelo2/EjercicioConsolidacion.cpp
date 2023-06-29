#include <iostream>
#include "TestSuitConsolidacion.h"

using namespace std;

/*
 * Post-Condicion: Devuelve una matriz dinamica donde cada fila
 * es una cadena de caracteres y cada fila tiene un tamanio maximo de @factorExpancion.
 * Los valores de la matriz cumplen con los especificados en los ejemplos.
 *
 * Ejemplo 1)
 * cadena = "sarampion"
 * factorExpancion = 2
 *
 * Se obtiene la matriz
 * sa
 * ra
 * mp
 * io
 * n
 * Donde cada fila es una cadena de caracteres. Es decir que los valores son
 * 's''a''\0'
 * 'r''a''\0'
 * 'm''p''\0'
 * 'i''o''\0'
 * 'n''\0'
 *
 * Ejemplo 2)
 * cadena = "cancion"
 * factorExpancion = 7
 *
 * Se obtiene la matriz
 * cancion
 * Donde la unica fila es una cadena de caracteres. Es decir que los valores son
 * 'c''a''n''c''i''o''n''\0'
 */
char** ExpandirCadena(char* cadena, int factorExpancion);

int main() {
	TestSuitConsolidacion::Ejecutar(ExpandirCadena);
}

char** ExpandirCadena(char* cadena, int caracteresPorFila){
	return NULL;
}