#include "buscas.h"
#include "grafo.h"
#include <stdlib.h>
#include <stdio.h>

void DFSRecursiva(Grafo *g, int vertice, int *visitado) {
    if (visitado == NULL) {
        visitado = (int *)malloc(g->numVertices * sizeof(int));
        for (int i = 0; i < g->numVertices; i++) {
            visitado[i] = 0; // Inicializa todos os vértices como não visitados
        }
    }
    visitado[vertice] = 1; // Marca o vértice como visitado
    printf("%d ", vertice); // Processa o vértice (neste caso, apenas imprime)

    No *adjacente = g->ListaAdjacencia[vertice];
    while (adjacente != NULL) {
        if (!visitado[adjacente->vertice]) {
            DFSRecursiva(g, adjacente->vertice, visitado); // Chamada recursiva para o vértice adjacente
        }
        adjacente = adjacente->proximo;
    }
}

void BFS(Grafo *g, int vertice) {
    int *visitado = (int *)malloc(g->numVertices * sizeof(int));
    for (int i = 0; i < g->numVertices; i++) {
        visitado[i] = 0; // Inicializa todos os vértices como não visitados
    }

    int *fila = (int *)malloc(g->numVertices * sizeof(int));
    int inicio = 0, fim = 0;

    visitado[vertice] = 1; // Marca o vértice inicial como visitado
    fila[fim++] = vertice; // Adiciona o vértice inicial à fila

    while (inicio < fim) {
        int atual = fila[inicio++]; // Remove o vértice da frente da fila
        printf("%d ", atual); // Processa o vértice (neste caso, apenas imprime)

        No *adjacente = g->ListaAdjacencia[atual];
        while (adjacente != NULL) {
            if (!visitado[adjacente->vertice]) {
                visitado[adjacente->vertice] = 1; // Marca o vértice adjacente como visitado
                fila[fim++] = adjacente->vertice; // Adiciona o vértice adjacente à fila
            }
            adjacente = adjacente->proximo;
        }
    }

    free(visitado);
    free(fila);
}