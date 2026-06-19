// pilha.c
// Implementação das funções da pilha

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

// Deixa o topo apontando para NULL (pilha começa vazia)
void inicializar(Pilha *p) {
    p->topo = NULL;
}

// Retorna 1 se vazia, 0 se tiver algum elemento
int vazia(Pilha *p) {
    return p->topo == NULL;
}

// Coloca um novo valor no topo da pilha
void empilhar(Pilha *p, int valor) {
    // Cria um novo nó na memória
    No *novo = (No*) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: sem memoria disponivel.\n");
        return;
    }

    novo->valor = valor;

    // O novo nó aponta para quem era o topo antes
    novo->proximo = p->topo;

    // Agora o topo é o novo nó
    p->topo = novo;

    printf("Empilhado: %d\n", valor);
}

// Remove e retorna o valor do topo
int desempilhar(Pilha *p) {
    if (vazia(p)) {
        printf("Pilha vazia! Nao da pra desempilhar.\n");
        return -1;
    }

    // Guarda o nó do topo para poder liberar depois
    No *temp = p->topo;
    int valor = temp->valor;

    // O topo agora é o próximo
    p->topo = temp->proximo;

    // Libera a memória do nó removido
    free(temp);

    printf("Desempilhado: %d\n", valor);
    return valor;
}

// Mostra todos os elementos do topo até a base
void exibir(Pilha *p) {
    if (vazia(p)) {
        printf("Pilha vazia.\n");
        return;
    }

    printf("Topo -> ");
    No *atual = p->topo;
    while (atual != NULL) {
        printf("[%d] ", atual->valor);
        atual = atual->proximo;
    }
    printf("<- Base\n");
}
