#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializar(Pilha *p) {
    p->topo = NULL;
}

int vazia(Pilha *p) {
    return p->topo == NULL;
}

void empilhar(Pilha *p, int valor) {
  
    No *novo = (No*) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: sem memoria disponivel.\n");
        return;
    }

    novo->valor = valor;

    novo->proximo = p->topo;

    p->topo = novo;

    printf("Empilhado: %d\n", valor);
}

int desempilhar(Pilha *p) {
    if (vazia(p)) {
        printf("Pilha vazia! Nao da pra desempilhar.\n");
        return -1;
    }

    No *temp = p->topo;
    int valor = temp->valor;

    p->topo = temp->proximo;

    free(temp);

    printf("Desempilhado: %d\n", valor);
    return valor;
}

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
