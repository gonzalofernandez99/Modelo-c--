#ifndef ARBOL_H_
#define ARBOL_H_

const int ItemInvalido = -999;

struct Nodo{
	int item;
	Nodo* hijoIzquierdo;
	Nodo* hijoDerecho;
};

struct Arbol{
	Nodo* raiz;
};

#endif
