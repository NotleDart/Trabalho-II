// fila.c
// Implementação das funções da fila

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Fila começa com frente e fim apontando para NULL
void inicializar(Fila *f) {
    f->frente = NULL;
    f->fim    = NULL;
}

// Retorna 1 se vazia, 0 se tiver algum elemento
int vazia(Fila *f) {
    return f->frente == NULL;
}

// Coloca um novo valor no FIM da fila
void enfileirar(Fila *f, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: sem memoria disponivel.\n");
        return;
    }

    novo->valor = valor;
    novo->proximo = NULL; // Vai ser o último, então não aponta pra ninguém

    if (vazia(f)) {
        // Se a fila estava vazia, frente e fim são o mesmo nó
        f->frente = novo;
        f->fim    = novo;
    } else {
        // Senão, encaixa no fim e atualiza o ponteiro fim
        f->fim->proximo = novo;
        f->fim = novo;
    }

    printf("Enfileirado: %d\n", valor);
}

// Remove e retorna o valor da FRENTE da fila
int desenfileirar(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia! Nao ha ninguem para atender.\n");
        return -1;
    }

    No *temp = f->frente;
    int valor = temp->valor;

    // A frente avança para o próximo
    f->frente = temp->proximo;

    // Se a fila ficou vazia, fim também precisa ser NULL
    if (f->frente == NULL) {
        f->fim = NULL;
    }

    free(temp);

    printf("Desenfileirado: %d\n", valor);
    return valor;
}

// Mostra todos os elementos da frente até o fim
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
