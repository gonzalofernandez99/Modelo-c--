#include <iostream>
#include "TestSuitConsolidacion.h"
using namespace std;

// Precondicion: @textoPrincipal y @textoAEvaluar son
// cadena de caracteres.
// Postcondicion: Devuelve la cantidad de aparciciones subliminales de @textoAEvaluar que se encuentran en @texto
// Se define como aparicion subliminal a una rotacion ciclica
// Ejemplos de rotaciones ciclicas con la cadena "amigo"
// "amigo" -> "goami"
// "amigo" -> "oamig"
// ... y otras mas (en total 5)
//
// Ejemplos de rotaciones ciclicas con la cadena = "caracas"
// "caracas" -> "cascara"
// "caracas" -> "scaraca"
//
// Ejemplos de contar apariciones subliminales
//
// Supongamos que textoAEvaluar es AB
// Para ABA: Deberia devolver 2 porque en la posicion 0 esta AB y en la posicion 1 esta BA
// Para BAB: Deberia devolver 2 porque en la posicion 0 esta BA y en la posicion 1 esta AB
// Supongamos que textoAEvaluar es "ABCD". Veamos los resultados esperados
// para distintos valores de TextoPrincipal
// ACDBZXCVB -> Deberia devolver 0. En ninguna parte de TextoPrincipal hay apariciones ciclicas de ABCD
// ACDBCDA -> Deberia devolver 1. En la posicion 3 esta la rotacion ciclica BCDA
// BCDAZZABCDZCDAB -> Deberia devolver 3 porque estan las rotaciones ciclicas BCDA ABCD CDAB
int ContarAparicionesSubliminales(char* textoPrincipal, char* textoAEvaluar);

int main() {
	TestSuitConsolidacion::EjecutarPruebasUnitarias(ContarAparicionesSubliminales);
	return 0;
}

int ContarAparicionesSubliminales(char* textoPrincipal, char* textoAEvaluar){
	return 0;
}
