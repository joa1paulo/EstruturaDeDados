    #include "ListaDinamica.h"
    #include <stdio.h>

    Lista* criarLista() {
        Lista* lista = (Lista*)malloc(sizeof(Lista));
        if (lista == NULL) {
            return NULL; // Falha na alocação de memória
        }
        lista->valor = 0; // Inicializa o valor da lista
        lista->proximo = NULL; // Inicializa o ponteiro para o próximo elemento como NULL
        return lista;
    }

    void DestruirLista(Lista* lista) {
        Lista* atual = lista;
        while (atual != NULL) {
            Lista* proximo = atual->proximo;
            free(atual);
            atual = proximo;
        }
    }

    Lista* inserirElemento(Lista* lista, int valor) {
        Lista* aux = (Lista*)malloc(sizeof(Lista));
        if (aux == NULL) {
            printf("Erro ao alocar memória para o novo elemento.\n");
            return lista; // Falha na alocação de memória, retorna a lista original
        }
        aux->valor = valor;
        aux->proximo = NULL;

        if (lista == NULL) {
            return aux; // Se a lista estiver vazia, retorna o novo elemento como a nova lista
        }

        Lista* atual = lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = aux; // Adiciona o novo elemento no final da lista
        return lista; // Retorna a lista atualizada
    }

    Lista* removerElemento(Lista* lista, int valor) {
        if (lista == NULL) {
            return NULL; // Lista vazia, nada a remover
        }

        Lista* atual = lista;
        Lista* anterior = NULL;

        while (atual != NULL && atual->valor != valor) {
            anterior = atual;
            atual = atual->proximo;
        }

        if (atual == NULL) {
            return lista; // Elemento não encontrado, retorna a lista original
        }

        if (anterior == NULL) {
            // O elemento a ser removido é o primeiro da lista
            Lista* novaLista = atual->proximo;
            free(atual);
            return novaLista; // Retorna a nova cabeça da lista
        } else {
            // O elemento a ser removido está no meio ou no final da lista
            anterior->proximo = atual->proximo;
            free(atual);
            return lista; // Retorna a lista atualizada
        }
    }

    void infoLista(Lista* lista) {
        int count = 0;
        Lista* atual = lista;
        while (atual != NULL) {
            printf("%d -> ", atual->valor);
            atual = atual->proximo;
            count++;
        }
        printf("NULL\n");
        printf("Total de elementos: %d\n", count);
    }
