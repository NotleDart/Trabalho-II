#ifndef PILHA_H
#define PILHA_H

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct {
    No *topo;
} Pilha;

void inicializar(Pilha *p);
int  vazia(Pilha *p);
void empilhar(Pilha *p, int valor);
int  desempilhar(Pilha *p);
void exibir(Pilha *p);

#endif
