#include "TestSuitConsolidacion.h"
#include <iostream>

using std::cout;
using std::endl;

void LogResultadoOK(const char* testUnitario)
{
	cout<<testUnitario<<" OK"<<endl;
}

void LogResultadoFallido(const char* testUnitario)
{
	cout<<testUnitario<<" falló."<<endl;
}

void MostrarError(const char* valorEsperado, const char* valorObtenido)
{
	cout<<"\tSe esperaba: \""<<valorEsperado<<"\" se obtuvo: \""<<valorObtenido<<"\""<<endl;
}

bool SonIguales(const char* cadena1, const char* cadena2)
{
	int i;
	for(i=0; cadena1[i]!='\0' && cadena2[i]!='\0'; ++i)
	{
		if(cadena1[i] != cadena2[i])
		{
			MostrarError(cadena2, cadena1);
			return false;
		}
	}

	bool iguales = cadena1[i]=='\0' && cadena2[i]=='\0';
	if(!iguales)
	{
		MostrarError(cadena2, cadena1);
	}

	return iguales;
}

void Destruir(char** matriz, int cantidadFilas)
{
	if(cantidadFilas > 0)
	{
		for(int i = 0; i < cantidadFilas; ++i)
		{
			delete [](matriz[i]);
		}

		delete []matriz;
	}
}

void TestCadenaHolaFactorExpancionUno(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 1;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], "h") && SonIguales(resultado[1], "o") && SonIguales(resultado[2], "l") && SonIguales(resultado[3], "a");

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionUno");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionUno");
	}

	Destruir(resultado, 4);
}

void TestCadenaHolaFactorExpancionDos(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 2;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], "ho") && SonIguales(resultado[1], "la");

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionDos");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionDos");
	}

	Destruir(resultado, 2);
}

void TestCadenaHolaFactorExpancionTres(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 3;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], "hol") && SonIguales(resultado[1], "a");

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionTres");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionTres");
	}

	Destruir(resultado, 2);
}

void TestCadenaHolaFactorExpancionCuatro(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 4;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], cadena);

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionCuatro");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionCuatro");
	}

	Destruir(resultado, 2);
}

void TestCadenaHolaFactorExpancionCinco(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 5;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], cadena);

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionCinco");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionCinco");
	}

	Destruir(resultado, 2);
}

void TestCadenaHolaFactorExpancionCincuenta(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 50;
	char* cadena = "hola";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], cadena);

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaHolaFactorExpancionCincuenta");
	}
	else
	{
		LogResultadoFallido("TestCadenaHolaFactorExpancionCincuenta");
	}

	Destruir(resultado, 2);
}

void TestCadenaLargaFactorExpancionCorto(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 5;
	char* cadena = "En su grave rincon, los jugadores rigen las lentas piezas. El tablero los demora hasta el alba en su severo ambito en que se odian dos colores";
	char** resultado = expandirCadena(cadena, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], "En su")
					&& SonIguales(resultado[1], " grav")
					&& SonIguales(resultado[2], "e rin")
					&& SonIguales(resultado[3], "con, ")
					&& SonIguales(resultado[4], "los j")
					&& SonIguales(resultado[5], "ugado")
					&& SonIguales(resultado[6], "res r")
					&& SonIguales(resultado[7], "igen ")
					&& SonIguales(resultado[8], "las l")
					&& SonIguales(resultado[9], "entas")
					&& SonIguales(resultado[10], " piez")
					&& SonIguales(resultado[11], "as. E")
					&& SonIguales(resultado[12], "l tab")
					&& SonIguales(resultado[13], "lero ")
					&& SonIguales(resultado[14], "los d")
					&& SonIguales(resultado[15], "emora")
					&& SonIguales(resultado[16], " hast")
					&& SonIguales(resultado[17], "a el ")
					&& SonIguales(resultado[18], "alba ")
					&& SonIguales(resultado[19], "en su")
					&& SonIguales(resultado[20], " seve")
					&& SonIguales(resultado[21], "ro am")
					&& SonIguales(resultado[22], "bito ")
					&& SonIguales(resultado[23], "en qu")
					&& SonIguales(resultado[24], "e se ")
					&& SonIguales(resultado[25], "odian")
					&& SonIguales(resultado[26], " dos ")
					&& SonIguales(resultado[27], "color")
					&& SonIguales(resultado[28], "es");

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaLargaFactorExpancionCorto");
	}
	else
	{
		LogResultadoFallido("TestCadenaLargaFactorExpancionCorto");
	}

	Destruir(resultado, 29);
}

void TestCadenaVacia(TestSuitConsolidacion::funcionExpandirCadena expandirCadena)
{
	int factorExpancion = 50;
	char* cadenaVacia = "";
	char** resultado = expandirCadena(cadenaVacia, factorExpancion);
	bool resultadoOk = SonIguales(resultado[0], cadenaVacia);

	if(resultadoOk)
	{
		LogResultadoOK("TestCadenaVacia");
	}
	else
	{
		LogResultadoFallido("TestCadenaVacia");
	}

	Destruir(resultado, 1);
}


void TestSuitConsolidacion::Ejecutar(funcionExpandirCadena funcionParaTestear){
	TestCadenaHolaFactorExpancionUno(funcionParaTestear);
	TestCadenaHolaFactorExpancionDos(funcionParaTestear);
	TestCadenaHolaFactorExpancionTres(funcionParaTestear);
	TestCadenaHolaFactorExpancionCuatro(funcionParaTestear);
	TestCadenaHolaFactorExpancionCinco(funcionParaTestear);
	TestCadenaHolaFactorExpancionCincuenta(funcionParaTestear);
	TestCadenaLargaFactorExpancionCorto(funcionParaTestear);
	TestCadenaVacia(funcionParaTestear);
}
