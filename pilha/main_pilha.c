// main_pilha.c
// Aplicação: Desfazer ações (como o Ctrl+Z)
// A pilha guarda as ações feitas. Desempilhar = desfazer a última ação.

#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha p;
    inicializar(&p);

    int opcao, valor;

    printf("=== Simulador de Ctrl+Z (Desfazer) ===\n");
    printf("Cada numero representa uma acao feita pelo usuario.\n\n");

    do {
        printf("\n1 - Fazer acao (empilhar)\n");
        printf("2 - Desfazer acao (desempilhar)\n");
        printf("3 - Ver acoes pendentes\n");
        printf("0 - Sair\n");
        printf("Opcao: ");

        // Se scanf retornar 0, o usuario digitou algo que nao e numero
        if (scanf(" %d", &opcao) == 0) {
            printf("Erro ao identificar acao. Digite apenas numeros.\n");
            // Limpa o que ficou no buffer para nao travar o loop
            scanf("%*[^\n]");
            opcao = -1;
            continue;
        }

        if (opcao == 1) {
            printf("Digite o numero da acao: ");
            if (scanf(" %d", &valor) == 0) {
                printf("Erro ao identificar acao. Digite apenas numeros.\n");
                scanf("%*[^\n]");
                continue;
            }
            empilhar(&p, valor);

        } else if (opcao == 2) {
            desempilhar(&p);

        } else if (opcao == 3) {
            exibir(&p);

        } else if (opcao != 0) {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
