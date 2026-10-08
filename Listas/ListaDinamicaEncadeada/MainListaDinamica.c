#include "ListaDinamica.h"

int main() {
    Lista* lista = criarLista();

    lista = inserirElemento(lista, 10);
    lista = inserirElemento(lista, 20);
    lista = inserirElemento(lista, 30);

    infoLista(lista);

    lista = removerElemento(lista, 20);
    infoLista(lista);

    DestruirLista(lista);

    infolista(lista); // Lista destruída, não deve exibir elementos

    return 0;
}