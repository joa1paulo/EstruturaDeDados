#include "grafo.h"
#include <stdlib.h>
#include <stdio.h>

Grafo *criarGrafo(int numVertices) {
    Grafo *grafo = (Grafo *)malloc(sizeof(Grafo));
    grafo->numVertices = numVertices;
    grafo->numArestas = 0;

    // Aloca memória para a lista de adjacência
    grafo->ListaAdjacencia = (No **)malloc(numVertices * sizeof(No *));
    for (int i = 0; i < numVertices; i++) {
        grafo->ListaAdjacencia[i] = NULL;
    }

    return grafo;
}

void adicionarAresta(Grafo *grafo, int origem, int destino) {
    // Cria um novo nó para o destino
    No *novoNo = (No *)malloc(sizeof(No));
    novoNo->vertice = destino;
    novoNo->proximo = grafo->ListaAdjacencia[origem];

    // Adiciona o nó à lista de adjacência da origem
    grafo->ListaAdjacencia[origem] = novoNo;

    // Incrementa o número de arestas
    grafo->numArestas++;
}

void imprimirGrafo(Grafo* grafo){
    printf("\nEstrutura do Grafo:\n");
    for (int i = 0; i < grafo->numVertices; i++) {// Percorre cada vértice
        No *atual = grafo->ListaAdjacencia[i];
        printf("Vertice %d: ", i);
        while (atual != NULL) {//percorre a lista de adjacência do vértice atual
            printf("-> (Valor: %d) ", atual->vertice);
            atual = atual->proximo;
        }
        printf("\n");
    }
}