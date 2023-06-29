#include <iostream>
#include "TestSuitConsolidacion.h"
#include "Arbol.h"

using std::cout;
using std::endl;
using TestSuitConsolidacion::TipoFuncionObtenerEnesimo;

Nodo* CrearNodo(int item, Nodo* izquierdo, Nodo* derecho);
Nodo* CrearHoja(int item);
Arbol* CrearArbolPrueba();
void Destruir(Arbol* arbol);
void Destruir(Nodo* nodo);
void VerificarPruebaUnitaria(int resultadoObtenido, int resultadoEsperado, const char* nombrePruebaUnitaria);

Arbol* arbolPrueba;

void TestPosicion0(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 0;
	int valorEsperado = 25;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion0");
}

void TestPosicion1(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 1;
	int valorEsperado = 43;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion1");
}

void TestPosicion2(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 2;
	int valorEsperado = 58;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion2");
}

void TestPosicion3(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 3;
	int valorEsperado = 62;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion3");
}

void TestPosicion4(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 4;
	int valorEsperado = 65;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion4");
}

void TestPosicion5(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 5;
	int valorEsperado = 66;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion5");
}

void TestPosicion6(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 6;
	int valorEsperado = 67;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion6");
}

void TestPosicion7(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 7;
	int valorEsperado = 68;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion7");
}

void TestPosicion8(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 8;
	int valorEsperado = 69;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion8");
}

void TestPosicion9(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 9;
	int valorEsperado = 70;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion9");
}

void TestPosicion10(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 10;
	int valorEsperado = 73;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion10");
}

void TestPosicion11(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 11;
	int valorEsperado = 75;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion11");
}

void TestPosicion12(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 12;
	int valorEsperado = 86;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion12");
}

void TestPosicion13(TipoFuncionObtenerEnesimo obtenerEnesimo){
	int enesimo = 13;
	int valorEsperado = ItemInvalido;
	int valorObtenido = obtenerEnesimo(arbolPrueba, enesimo);
	VerificarPruebaUnitaria(valorObtenido, valorEsperado, "TestPosicion13");
}

void TestSuitConsolidacion::EjecutarPruebasUnitarias(TipoFuncionObtenerEnesimo obtenerEnesimo){
	arbolPrueba = CrearArbolPrueba();
	TestPosicion0(obtenerEnesimo);
	TestPosicion1(obtenerEnesimo);
	TestPosicion2(obtenerEnesimo);
	TestPosicion3(obtenerEnesimo);
	TestPosicion4(obtenerEnesimo);
	TestPosicion5(obtenerEnesimo);
	TestPosicion6(obtenerEnesimo);
	TestPosicion7(obtenerEnesimo);
	TestPosicion8(obtenerEnesimo);
	TestPosicion9(obtenerEnesimo);
	TestPosicion10(obtenerEnesimo);
	TestPosicion11(obtenerEnesimo);
	TestPosicion12(obtenerEnesimo);
	TestPosicion13(obtenerEnesimo);
	Destruir(arbolPrueba);
}

void VerificarPruebaUnitaria(int resultadoObtenido, int resultadoEsperado, const char* nombrePruebaUnitaria)
{
	if(resultadoEsperado == resultadoObtenido){
		cout<<nombrePruebaUnitaria<<": OK."<<endl;
	}
	else{
		cout<<nombrePruebaUnitaria<<": Error.\n\tSe obtuvo: \t["<<resultadoObtenido<<"]";
		cout<<"\n\tSe esperaba:\t["<<resultadoEsperado<<"]";
		cout<<endl;
	}
}

void Destruir(Arbol* arbol){
	Destruir(arbol->raiz);
	delete arbol;
}

void Destruir(Nodo* nodo){
	if(nodo!=NULL){
		Destruir(nodo->hijoIzquierdo);
		Destruir(nodo->hijoDerecho);
		delete nodo;
	}
}

Nodo* CrearNodo(int item, Nodo* izquierdo, Nodo* derecho){
	Nodo* nodo = new Nodo;
	nodo->item = item;
	nodo->hijoDerecho = derecho;
	nodo->hijoIzquierdo = izquierdo;
	return nodo;
}

Nodo* CrearHoja(int clave){
	Nodo* hoja = new Nodo;
	hoja->item = clave;
	hoja->hijoDerecho = hoja->hijoIzquierdo = NULL;
	return hoja;
}

Arbol* CrearArbolPrueba(){
	Arbol* arbol = new Arbol;
	Nodo* subArbolIzquierdo = CrearNodo(43, CrearHoja(25), CrearNodo(58, NULL, CrearHoja(62)));
	Nodo* subArbolDerecho = CrearNodo(70, CrearNodo(67, CrearHoja(66), CrearNodo(69, CrearHoja(68), NULL)), CrearNodo(75, CrearHoja(73), CrearHoja(86)));
	arbol->raiz = CrearNodo(65, subArbolIzquierdo, subArbolDerecho);
	return arbol;
}
