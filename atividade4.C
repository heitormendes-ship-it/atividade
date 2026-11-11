#include <stdio.h>

int main() {
    float total = 0.0;
    int opcao = 0;

    do {
        printf("\n--- Cofrinho Digital ---\n");
        printf("Saldo atual: R$ %.2f\n", total);
        printf("Escolha uma moeda para adicionar:\n");
        printf("1 - R$ 0,50\n");
        printf("2 - R$ 1,00\n");
        printf("3 - R$ 2,00\n");
        printf("4 - Parar e ver o total\n");
        printf("Opcao: ");

        // se a leitura falhar (ex.: letra), limpa o buffer e pede de novo
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("Entrada invalida! Digite um numero.\n");
            opcao = 0;
            continue;
        }

        switch (opcao) {
            case 1:
                total += 0.50;
                break;
            case 2:
                total += 1.00;
                break;
            case 3:
                total += 2.00;
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    printf("\nVoce parou de adicionar moedas.\n");
    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}
