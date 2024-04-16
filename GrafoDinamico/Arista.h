#pragma once
#include <iostream>

class Vertice;

class Arista
{
	int distancia; // Peso de la Arista
	Arista* sig; // Puntero hacia la siguiente arista del vertice
	Vertice* dest; // Puntero hacia el vertice destino

	friend class Grafo;
public:
	Arista(Vertice* _dest, int distancia);
};

