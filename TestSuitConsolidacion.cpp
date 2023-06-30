#include <iostream>
#include "TestSuitConsolidacion.h"

using std::cout;
using std::endl;
using TestSuitConsolidacion::FuncionContarAparicionesSubliminales;

void VerificarPruebaUnitaria(int valorObtenido, int valorEsperado, const char * textoPrincipal, const char * textoAEvaluar, const char* nombrePruebaUnitaria);

void TestEjemplo01(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "AB";
	const char *textoPrincipal = "ABA";
	int valorEsperado = 2;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestEjemplo01");
}


void TestEjemplo02(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "AB";
	const char *textoPrincipal = "BAB";
	int valorEsperado = 2;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestEjemplo02");
}

void TestEjemplo03(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "ABCD";
	const char *textoPrincipal = "ACDBZXCVB";
	int valorEsperado = 0;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestEjemplo03");
}

void TestEjemplo04(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "ABCD";
	const char *textoPrincipal = "ACDBCDA";
	int valorEsperado = 1;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestEjemplo04");
}

void TestEjemplo05(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "ABCD";
	const char *textoPrincipal = "BCDAZZABCDZCDAB";
	int valorEsperado = 3;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestEjemplo05");
}

void TestTextoAEvaluarEsUnCaracter(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "A";
	const char *textoPrincipal = "BCDAZZABCDZCDAB";
	int valorEsperado = 3;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestTextoAEvaluarEsUnCaracter");
}

void TestTextoAEvaluarTieneTodasLasRotaciones(FuncionContarAparicionesSubliminales contar){
	const char *textoAEvaluar = "caracas";
	const char *textoPrincipal = "caracaszaracascxracascawacascarqcascarapascaracoscaraca";
	int valorEsperado = 7;
	int valorObtenido = contar(textoPrincipal, textoAEvaluar);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, textoPrincipal, textoAEvaluar, "TestTextoAEvaluarTieneTodasLasRotaciones");
}

void TestSuitConsolidacion::EjecutarPruebasUnitarias(FuncionContarAparicionesSubliminales contar){
	TestEjemplo01(contar);
	TestEjemplo02(contar);
	TestEjemplo03(contar);
	TestEjemplo04(contar);
	TestEjemplo05(contar);
	TestTextoAEvaluarEsUnCaracter(contar);
	TestTextoAEvaluarTieneTodasLasRotaciones(contar);
}

void VerificarPruebaUnitaria(int valorObtenido, int valorEsperado, const char * textoPrincipal, const char * textoAEvaluar, const char* nombrePruebaUnitaria)
{
	if(valorObtenido == valorEsperado){
		cout<<nombrePruebaUnitaria<<": OK."<<endl;
	}
	else{
		cout<<nombrePruebaUnitaria<<": Error para (\""<<textoPrincipal<<"\",\""<<textoAEvaluar<<"\")\n\tSe obtuvo: \t["<<valorObtenido<<"]";
		cout<<"\n\tSe esperaba:\t["<<valorEsperado<<"]";
		cout<<endl;
	}
}
