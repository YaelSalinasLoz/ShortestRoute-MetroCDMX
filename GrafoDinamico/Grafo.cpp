#include "Grafo.h"


Grafo::Grafo() // Inicializamos variables	
{
	primero = NULL;
	tamano = 0;
}

bool Grafo::EstaVacio() // Si el tamaño es igual a 0 retorna true
{
	return tamano == 0;
}

int Grafo::ObtenerTamano() // Retorma el tamaño del grafo
{
	return tamano;
}

Vertice* Grafo::ObtenerVertice(string nombre)
{
	Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo

	while (i != NULL) // Recorremos mientras no lleguemos al final del grafo
	{
		if (i->nombre == nombre) // Si lo encuentra lo retorna
			return i;

		i = i->sig; // Se va moviendo de uno en uno
	}

	return NULL; // Si no lo encuentra retorna NULL
}

void Grafo::InsertaVertice(string nombre)
{
	if (ObtenerVertice(nombre) == NULL) // Validamos si no existe
	{
		Vertice* nuevo = new Vertice(nombre); // Si no existe creamos uno nuevo

		if (EstaVacio()) // Si el grafo está vacío
			primero = nuevo; // El nuevo vertice es el primero
		else
		{
			Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo
			while (i->sig != NULL) // Recorremos hasta llegar al final del grafo
				i = i->sig; //	Se va moviendo de uno en uno

			i->sig = nuevo; // El último vertice apunta al nuevo
		}

		tamano++; // Aumentamos el tamaño del grafo
	}
	else // En caso de que ya exista el vertice
		cout << "Ese vertice ya existe en el grafo" << endl;
}

void Grafo::InsertaArista(string ori, string dest, int distancia)
{
	Vertice* vori = ObtenerVertice(ori); // Obtenemos el vertice origen
	Vertice* vdest = ObtenerVertice(dest); // Obtenemos el vertice destino

	//Validamos que exista el vertice origen y el vertice destino
	if (vori == NULL) 
		cout << "El vertice origen no existe" << endl;

	if (vdest == NULL)
		cout << "El vertice destino no existe" << endl;

	if (vori != NULL && vdest != NULL) // Si existen
	{
		Arista* nueva = new Arista(vdest, distancia); // Creamos una nueva arista

		if (vori->ari == NULL) // Si el vertice origen no tiene aristas
			vori->ari = nueva; // La nueva arista es la primera
		else // Si ya tiene aristas
		{
			Arista* j = vori->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

			while (j->sig != NULL) // Recorremos hasta llegar al final de las aristas
				j = j->sig; // Se va moviendo de uno en uno

			j->sig = nueva; // La última arista apunta a la nueva
		}
	}
}

void Grafo::MostrarListaAdyacencia()
{
	Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo

	while (i != NULL) // Recorremos hasta llegar al final del grafo 
	{
		Arista* j = i->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen
		cout << i->nombre << " = ";

		while (j != NULL) // Recorremos hasta llegar al final de las aristas
		{
			cout << i->nombre << "->" << j->distancia << "->" << j->dest->nombre << ",";
			j = j->sig; // Se va moviendo de uno en uno
		}

		cout << endl;
		i = i->sig; // Se va moviendo de uno en uno
	}
}

void Grafo::EliminarAristas(Vertice* vertice)
{
	if (vertice == NULL) // Si el vertice es NULL
		return; // No hace nada

	Arista* i = vertice->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

	while (vertice->ari != NULL) // Recorremos hasta llegar al final de las aristas
	{
		i = vertice->ari; // El puntero auxiliar apunta a la primera arista
		vertice->ari = vertice->ari->sig; // El vertice apunta a la siguiente arista
		cout << "Arista " << vertice->nombre << "->" << i->dest->nombre << " eliminada" << endl;
		delete(i); // Eliminamos la arista
	}
}

void Grafo::EliminarAristasDestino(string dest)
{
	Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo

	while (i != NULL) // Recorremos hasta llegar al final del grafo
	{
		Arista* j = i->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen
		Arista* ant = NULL; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

		while (j != NULL)
		{
			if (j->dest->nombre == dest)
			{
				if (ant == NULL)
					i->ari = j->sig;
				else
					ant->sig = j->sig;

				cout << "Arista " << i->nombre << "->" << j->dest->nombre << " eliminada" << endl;
				delete(j);
				j = ant;
			}

			ant = j;

			if (j != NULL)
				j = j->sig;
		}

		i = i->sig;
	}
}


void Grafo::EliminarVertice(string nombre)
{
	if (primero->nombre == nombre) // Si el vertice a eliminar es el primero
	{
		Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo
		primero = primero->sig; // El primero apunta al siguiente
		EliminarAristas(i); // Eliminamos las aristas del vertice
		EliminarAristasDestino(i->nombre); // Eliminamos las aristas que apuntan al vertice
		cout << "Vertice " << nombre << " fue eliminado" << endl;
		delete(i); // Eliminamos el vertice
		tamano--; // Disminuimos el tamaño del grafo
	}
	else // Si el vertice a eliminar no es el primero
	{
		Vertice* i = primero; // Puntero auxiliar que vaya recorriendo el grafo detrás de j
		Vertice* j = i->sig; // Puntero auxiliar que vaya recorriendo el grafo 
		bool existe = false; // Bandera que indica si el vertice existe

		while (j != NULL) // Recorremos hasta llegar al final del grafo
		{
			if (j->nombre == nombre) // Si el vertice a eliminar es el siguiente
			{
				i->sig = j->sig; // El vertice anterior apunta al siguiente
				EliminarAristas(j); // Eliminamos las aristas del vertice
				EliminarAristasDestino(j->nombre); // Eliminamos las aristas que apuntan al vertice
				cout << "Vertice " << nombre << " fue eliminado" << endl;
				delete(j); // Eliminamos el vertice
				tamano--; // Disminuimos el tamaño del grafo
				existe = true; // El vertice existe
				break;
			}

			i = j; // i va siguiendo a j
			j = j->sig; // Se va moviendo de uno en uno
		}

		if (!existe) // Si el vertice no existe
			cout << "El vertice especificado no existe" << endl;
	}
}

void Grafo::EliminarArista(string ori, string dest)
{
	Vertice* vori = ObtenerVertice(ori); // Obtenemos el vertice origen
	Vertice* vdest = ObtenerVertice(dest); // Obtenemos el vertice destino

	if (vori == NULL) // Si el vertice origen no existe
		cout << "El vertice origen no existe" << endl;

	if (vdest == NULL) // Si el vertice destino no existe
		cout << "El vertice destino no existe" << endl;

	if (vori != NULL && vdest != NULL) // Si existen
	{
		if (vori->ari->dest == vdest) // Si la primera arista del vertice origen es el vertice destino
		{
			Arista* i = vori->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen
			vori->ari = vori->ari->sig; // El vertice origen apunta a la siguiente arista
			cout << "Arista " << ori << "->" << dest << " eliminada" << endl;
			delete(i); // Eliminamos la arista
		}
		else // Si la primera arista del vertice origen no es el vertice destino
		{
			Arista* i = vori->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen
			Arista* j = i->sig; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

			while (j != NULL) // Recorremos hasta llegar al final del grafo
			{
				if (j->dest == vdest) // Si la arista es el vertice destino
				{
					i->sig = j->sig; // El vertice origen apunta a la siguiente arista
					cout << "Arista " << ori << "->" << dest << " eliminada" << endl; 
					delete(j); // Eliminamos la arista
					break;
				}

				i = j; // i va siguiendo a j
				j = j->sig; // Se va moviendo de uno en uno
			}
		}
	}
}

bool DistanciaMinima(const pair<Vertice*, int>& a, const pair<Vertice*, int>& b) // Funcion para ordenar los vertices por distancia mínima
{
	return a.second < b.second; // Ordenamos de menor a mayor
}

void Grafo::Dijkstra(string origen, string destino)
{
	Vertice* vorigen = ObtenerVertice(origen); // Obtenemos el vertice origen
	Vertice* vdestino = ObtenerVertice(destino); // Obtenemos el vertice destino
	
	

	if (vorigen == NULL) // Si el vertice origen no existe
		cout << "El vertice origen no existe" << endl;
	else // Si existe
	{
		map<Vertice*, map<Vertice*, int>> matriz; // Matriz de adyacencia : mapa pares (Vertice, vertice con entero)
		map<Vertice*, bool> visitados; // Mapa de visitados : mapa pares (Vertice, booleano)
		map<Vertice*, Vertice*> rutas; // Mapa de rutas : mapa pares (Vertice, vertice)
		map<Vertice*, int> cola; // Mapa de cola : mapa pares (Vertice, entero)
		map<Vertice*, int> distancias; // Mapa de distancias : mapa pares (Vertice, entero)

		Vertice* vi = primero; // Puntero auxiliar que vaya recorriendo el grafo

		//Estamos recorriendo las filas de la matriz
		while (vi != NULL) // Recorremos hasta llegar al final del grafo
		{
			visitados[vi] = false; // Marcamos todos los vertices como no visitados
			rutas[vi] = NULL; // Marcamos todos los vertices como no visitados
			distancias[vi] = numeric_limits<int>::max(); // Marcamos todas las distancias como infinito -- valor máximo del entero

			Vertice* vj = primero; // Puntero auxiliar que vaya recorriendo el grafo

			// Recorremos las columnas de la matriz
			while (vj != NULL) // Recorremos hasta llegar al final de grafo
			{
				matriz[vi][vj] = numeric_limits<int>::max(); // Marcamos todas las distancias como infinito -- valor máximo del entero
				vj = vj->sig; // Se va moviendo de uno en uno
			}

			Arista* aj = vi->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

			//Recorremos sus aristas del vertice i
			while (aj != NULL) // Recorremos hasta llegar al final de las aristas
			{
				matriz[vi][aj->dest] = aj->distancia; // Marcamos la distancia de la arista
				aj = aj->sig; // Se va moviendo de uno en uno
			}

			vi = vi->sig; // Se va moviendo de uno en uno
		}

		distancias[vorigen] = 0; // La distancia del vertice origen es 0
		visitados[vorigen] = true; // Marcamos el vertice origen como visitado
		cola[vorigen] = distancias[vorigen]; // Añadimos el vertice origen a la cola

		while (!cola.empty()) // Mientras la cola no esté vacía
		{
			// Encuentra el vertice con la distancia menor en la cola
			map<Vertice*, int>::iterator iter = min_element(cola.begin(), cola.end(), DistanciaMinima);
			visitados[iter->first] = true; // Marcamos el vertice como visitado

			// Recorre todos los vertices que tiene como destino
			Arista* ai = iter->first->ari; // Puntero auxiliar que vaya recorriendo las aristas del vertice origen

			while (ai != NULL) // Recorremos hasta llegar al final de las aristas
			{
				if (!visitados[ai->dest]) // Si el vertice destino no ha sido visitado
				{
					if (distancias[ai->dest] > distancias[iter->first] + matriz[iter->first][ai->dest]) // Si la distancia del vertice destino es mayor que la distancia del vertice origen + la distancia de la arista 
					{
						distancias[ai->dest] = distancias[iter->first] + matriz[iter->first][ai->dest]; // Actualizamos la distancia del vertice destino
						rutas[ai->dest] = iter->first; // Actualizamos la ruta del vertice destino
						cola[ai->dest] = distancias[ai->dest]; // Añadimos el vertice destino a la cola
					}
				}

				ai = ai->sig; // Se va moviendo de uno en uno
			}

			cola.erase(iter->first); // Eliminamos el vertice de la cola
		}


		// Muestra la ruta del origen al destino
		Vertice* v = vdestino; // Puntero auxiliar que vaya recorriendo el grafo
		stack<Vertice*> pila; // Pila de vertices
		
		while (v != NULL) // Recorremos hasta llegar al final del grafo 
		{
			pila.push(v); // Añadimos el vertice a la pila
			v = rutas[v]; // Actualizamos el vertice
		}
		
		cout << "\n// RUTA: ";
		while (!pila.empty()) // Mientras la pila no esté vacía
		{
			cout << pila.top()->nombre << " --> "; // Mostramos el vertice
			pila.pop(); // Eliminamos el vertice de la pila

		}
		cout << endl;
		// Imprime la distancia del origen al destino
		cout << "\n// DISTANCIA (metros): " << distancias[vdestino] << endl;
		
	}
}
