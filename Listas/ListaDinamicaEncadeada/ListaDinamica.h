#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

typedef struct lista {
    int valor;
    struct no* proximo;
} Lista;

Lista* criarLista();
void DestruirLista(Lista* lista);
Lista* inserirElemento(Lista* lista, int valor);
Lista* removerElemento(Lista* lista, int valor);
void infoLista(Lista* lista);


#endif // LISTADINAMICA_H