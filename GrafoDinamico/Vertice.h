#pragma once
#include <iostream>
using namespace std;

class Arista; // La incluimos porque la usamos más abajo

class Vertice
{
	string nombre;// Es  el nombre de la estación
	Vertice* sig; // Puntero hacia el siguiente vértice del grafo
	Arista* ari; // Puntero hacia la primer arista del vertice

	friend class Grafo; // Para que Grafo pueda acceder a los datos de Vertice
public:
	Vertice(string nombre); // Constructor 
};

