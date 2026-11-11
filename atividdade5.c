#include <stdio.h>

int main() {
    const int NUM_CLIENTES = 10;
    const float NOTA_MINIMA = 7.0;

    float nota;
    float somaNotas = 0.0;

    for (int i = 1; i <= NUM_CLIENTES; i++) {
        // repete a leitura até receber uma nota válida
        while (1) {
            printf("Informe a nota do cliente %d (0 a 10): ", i);

            if (scanf("%f", &nota) != 1) {
                // entrada não numérica: limpa o buffer
                while (getchar() != '\n');
                printf("Entrada invalida. Digite um numero.\n");
                continue;
            }

            if (nota < 0 || nota > 10) {
                printf("Nota fora do intervalo. Use valores de 0 a 10.\n");
                continue;
            }

            break; // nota válida
        }

        somaNotas += nota;
    }

    float mediaGeral = somaNotas / NUM_CLIENTES;

    printf("\nMedia geral de atendimento: %.2f\n", mediaGeral);

    if (mediaGeral < NOTA_MINIMA) {
        printf("ALERTA: a media de atendimento esta abaixo do esperado!\n");
    } else {
        printf("Atendimento dentro do padrao esperado.\n");
    }

    return 0;
}
