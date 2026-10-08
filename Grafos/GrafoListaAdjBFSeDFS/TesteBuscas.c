#include "buscas.h"
#include "grafo.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    Grafo *grafo = criarGrafo(10);
    adicionarAresta(grafo, 0, 1);
    adicionarAresta(grafo, 0, 2);
    adicionarAresta(grafo, 1, 3);
    adicionarAresta(grafo, 1, 4);
    adicionarAresta(grafo, 2, 5);
    adicionarAresta(grafo, 2, 6);
    adicionarAresta(grafo, 3, 7);
    adicionarAresta(grafo, 4, 8);
    adicionarAresta(grafo, 5, 9);

    
    printf("====================================================================\n");
    imprimirGrafo(grafo);
    printf("====================================================================\n");
    printf("Busca em Profundidade (DFS):\n");
    DFSRecursiva(grafo, 0, NULL);
    printf("\n");
    printf("====================================================================\n");
    printf("Busca em Largura (BFS):\n");
    BFS(grafo, 0);
    printf("\n");
    printf("====================================================================\n");

    return 0;
}