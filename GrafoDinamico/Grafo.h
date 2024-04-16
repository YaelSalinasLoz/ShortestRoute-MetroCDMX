#pragma once
#include "Vertice.h" // Incluimos la clase Vertice
#include "Arista.h" // Incluimos la clase Arista
#include <queue> // Para usar la cola de prioridad
#include <stack> // Para usar la pila de v�rtices
#include <map> // Para usar el mapa de v�rtices

using namespace std;

class Grafo
{
	Vertice* primero; // Puntero a un v�rtice del grafo
	int tamano; // N�mero de v�rtices del grafo 

public:
	Grafo();
	bool EstaVacio(); // Retorna true si el grafo est� vac�o
	int ObtenerTamano(); // Retorna el n�mero de vertices en el grafo
	Vertice* ObtenerVertice(string nombre); // Retornar el vertice que tenga el nombre especificado
	void InsertaVertice(string nombre); // Inserta un vertice al grafo
	void InsertaArista(string ori, string dest, int precio); // Inserta arista entre los dos vertices especificados con el precio especificado
	void MostrarListaAdyacencia(); // Mostrar todos los vertices con sus aristas y precios
	void EliminarVertice(string nombre); // Elimina el vertice con el nombre especificado
	void EliminarArista(string ori, string dest); // Elimina la arista entre los dos vertices especificados
	void EliminarAristas(Vertice* vertice); // Elimina las aristas del vertice especificado
	void EliminarAristasDestino(string dest); // Elimina las aristas que tienen como destino el vertice especificado
	void Dijkstra(string origen, string destino); // Despliega la ruta m�s corta entre el origen y los dem�s vertices
};

