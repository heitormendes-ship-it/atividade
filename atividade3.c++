#include <stdio.h>

int main() {
    // Quantidade fixa de moradores a serem monitorados
    const int NUM_MORADORES = 5;
    // Limite de consumo considerado "dentro da média"
    const float LIMITE_MEDIA = 20.0;

    float consumo[NUM_MORADORES]; // guarda o consumo de cada morador
    float somaTotal = 0.0;        // acumula o consumo de todos para calcular a média geral

    // Laço para ler o consumo de cada morador e já classificar
    for (int i = 0; i < NUM_MORADORES; i++) {
        printf("Informe o consumo (em m3) do morador %d: ", i + 1);
        scanf("%f", &consumo[i]);

        somaTotal += consumo[i]; // soma para a média geral no final

        // Classificação individual: dentro da média ou acima
        if (consumo[i] <= LIMITE_MEDIA) {
            printf("  -> Morador %d: consumo DENTRO da media (%.2f m3)\n", i + 1, consumo[i]);
        } else {
            printf("  -> Morador %d: consumo ACIMA da media (%.2f m3)\n", i + 1, consumo[i]);
        }
    }

    // Calcula a média geral do condomínio dividindo o total pelo número de moradores
    float mediaGeral = somaTotal / NUM_MORADORES;

    printf("\nConsumo medio geral do condominio: %.2f m3\n", mediaGeral);

    return 0;
}