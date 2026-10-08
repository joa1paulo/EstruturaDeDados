#ifndef GRAFO_H
#define GRAFO_H

struct no {
    int vertice;
    struct no *proximo;
};

typedef struct no No;

struct grafo {
    int numVertices;
    int numArestas;
    No **ListaAdjacencia;
};

typedef struct grafo Grafo;

Grafo *criarGrafo(int numVertices);
void adicionarAresta(Grafo *grafo, int origem, int destino);
void imprimirGrafo(Grafo *grafo);


#endif