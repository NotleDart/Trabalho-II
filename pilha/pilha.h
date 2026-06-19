// pilha.h
// Definição da estrutura da Pilha e das funções que vamos usar

#ifndef PILHA_H
#define PILHA_H

// Cada "caixinha" da pilha guarda um número inteiro
// e aponta para a próxima caixinha abaixo dela
typedef struct No {
    int valor;
    struct No *proximo;
} No;

// A pilha em si só precisa saber onde está o topo
typedef struct {
    No *topo;
} Pilha;

// Funções disponíveis
void inicializar(Pilha *p);
int  vazia(Pilha *p);
void empilhar(Pilha *p, int valor);
int  desempilhar(Pilha *p);
void exibir(Pilha *p);

#endif
