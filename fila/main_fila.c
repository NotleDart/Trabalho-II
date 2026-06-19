// main_fila.c
// Aplicação: Fila de atendimento (tipo banco ou lotérico)
// Quem chega primeiro é atendido primeiro (FIFO)

#include <stdio.h>
#include "fila.h"

int main() {
    Fila f;
    inicializar(&f);

    int opcao, senha;

    printf("=== Fila de Atendimento ===\n");
    printf("Cada numero representa a senha de um cliente.\n\n");

    do {
        printf("\n1 - Cliente chegou (enfileirar)\n");
        printf("2 - Chamar proximo (desenfileirar)\n");
        printf("3 - Ver fila\n");
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
            printf("Digite a senha do cliente: ");
            if (scanf(" %d", &senha) == 0) {
                printf("Erro ao identificar acao. Digite apenas numeros.\n");
                scanf("%*[^\n]");
                continue;
            }
            enfileirar(&f, senha);

        } else if (opcao == 2) {
            desenfileirar(&f);

        } else if (opcao == 3) {
            exibir(&f);

        } else if (opcao != 0) {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
