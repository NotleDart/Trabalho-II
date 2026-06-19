// fila.h
// Definição da estrutura da Fila e das funções que vamos usar

#ifndef FILA_H
#define FILA_H

// Cada "caixinha" da fila guarda um número inteiro
// e aponta para o próximo da fila
typedef struct No {
    int valor;
    struct No *proximo;
} No;

// A fila precisa saber onde está a frente (quem sai)
// e o fim (onde entra o próximo)
typedef struct {
    No *frente;
    No *fim;
} Fila;

// Funções disponíveis
void inicializar(Fila *f);
int  vazia(Fila *f);
void enfileirar(Fila *f, int valor);
int  desenfileirar(Fila *f);
void exibir(Fila *f);

#endif
