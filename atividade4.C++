#include <stdio.h>

int main() {
    float total = 0.0; // acumula o valor total guardado no cofrinho
    int opcao;          // opção escolhida pelo usuário no menu

    // Repete até o usuário escolher a opção de parar (4)
    do {
        printf("\n--- Cofrinho Digital ---\n");
        printf("Saldo atual: R$ %.2f\n", total);
        printf("Escolha uma moeda para adicionar:\n");
        printf("1 - R$ 0,50\n");
        printf("2 - R$ 1,00\n");
        printf("3 - R$ 2,00\n");
        printf("4 - Parar e ver o total\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        // Com base na escolha, soma o valor correspondente ao total
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
                // Não faz nada aqui, apenas encerra o laço na condição do "while"
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4); // continua enquanto o usuário não escolher parar

    printf("\nVoce parou de adicionar moedas.\n");
    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}