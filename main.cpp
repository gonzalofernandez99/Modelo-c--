#include <iostream>
#include <string>
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
int ContarAparicionesSubliminales(const char* textoPrincipal,const char* textoAEvaluar);
int longitudCadena(const char* cadena);
int ContarAparicionesSubliminales(const char* textoPrincipal,const char* textoAEvaluar);
int main() {
	TestSuitConsolidacion::EjecutarPruebasUnitarias(ContarAparicionesSubliminales);
	std::cin.get();
	return 0;
}


// Función para calcular la longitud de una cadena
int longitudCadena(const char* cadena) {
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        ++longitud;
    }
    return longitud;
}

// Función para buscar una subcadena en una cadena
const char* buscarSubcadena(const char* cadena, const char* subcadena) {
    int longCadena = longitudCadena(cadena);
    int longSubcadena = longitudCadena(subcadena);
    for (int i = 0; i <= longCadena - longSubcadena; ++i) {
        int j;
        for (j = 0; j < longSubcadena; ++j) {
            if (cadena[i + j] != subcadena[j]) {
                break;
            }
        }
        if (j == longSubcadena) {
            return cadena + i;
        }
    }
    return nullptr;
}

int ContarAparicionesSubliminales(const char* textoPrincipal,const char* textoAEvaluar) {
    int longitud = longitudCadena(textoAEvaluar);
    char rotacion[longitud + 1];
    int conteo = 0;

    for (int i = 0; i < longitud; ++i) {
        // Generar la rotación ciclica
        for (int j = 0; j < longitud; ++j) {
            rotacion[j] = textoAEvaluar[(i + j) % longitud];
        }
        rotacion[longitud] = '\0'; 

       
        const char* pos = buscarSubcadena(textoPrincipal, rotacion);
        while (pos != nullptr) {
            ++conteo;
            pos = buscarSubcadena(pos + 1, rotacion);
        }
    }

    return conteo;
}
