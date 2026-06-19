#ifndef FILA_H
#define FILA_H

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *frente;
    No *fim;
} Fila;

void inicializar(Fila *f);
int  vazia(Fila *f);
void enfileirar(Fila *f, int valor);
int  desenfileirar(Fila *f);
void exibir(Fila *f);

#endif
