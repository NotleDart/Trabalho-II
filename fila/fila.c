#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void inicializar(Fila *f) {
    f->frente = NULL;
    f->fim    = NULL;
}

int vazia(Fila *f) {
    return f->frente == NULL;
}

void enfileirar(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: sem memoria disponivel.\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL;

    if (vazia(f)) {
        f->frente = novo;
        f->fim    = novo;
    } else {
        f->fim->proximo = novo;
        f->fim = novo;
    }

    printf("Enfileirado: %d\n", valor);
}

int desenfileirar(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia! Nao ha ninguem para atender.\n");
        return -1;
    }

    No *temp = f->frente;
    int valor = temp->valor;

    f->frente = temp->proximo;

    if (f->frente == NULL) {
        f->fim = NULL;
    }

    free(temp);

    printf("Desenfileirado: %d\n", valor);
    return valor;
}

void exibir(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia.\n");
        return;
    }

    printf("Frente -> ");
    No *atual = f->frente;
    while (atual != NULL) {
        printf("[%d] ", atual->valor);
        atual = atual->proximo;
    }
    printf("<- Fim\n");
}
