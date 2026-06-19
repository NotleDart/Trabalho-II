# Trabalho II - Pilhas e Filas

Trabalho da disciplina de Estrutura de Dados I  
UESPI - Campus Piripiri
aluno: Elton Duarte

## O que foi feito

Foram implementadas duas estruturas de dados: Pilha e Fila, cada uma com uma aplicação prática.

**Pilha:** simula o desfazer de ações (tipo Ctrl+Z). Cada ação feita é empilhada, e ao desfazer, a última ação é removida do topo.

**Fila:** simula uma fila de atendimento (tipo banco), onde são chamados senhas por números. Quem chega primeiro é atendido primeiro e quando é chamada outra senha a anterior é tirada da fila.

## Como compilar e rodar
------------------
O código de pilha:
------------------
cd pilha

gcc -o pilha main_pilha.c pilha.c
./pilha

------------------
O código de pilha:
------------------
cd fila

gcc -o fila main_fila.c fila.c
./fila
