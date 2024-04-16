#pragma once
#include <iostream>
using namespace std;

class Arista; // La incluimos porque la usamos m�s abajo

class Vertice
{
	string nombre;// Es  el nombre de la estaci�n
	Vertice* sig; // Puntero hacia el siguiente v�rtice del grafo
	Arista* ari; // Puntero hacia la primer arista del vertice

	friend class Grafo; // Para que Grafo pueda acceder a los datos de Vertice
public:
	Vertice(string nombre); // Constructor 
};

