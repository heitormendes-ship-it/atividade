#include <stdio.h>

int main() {
    const int META_PASSOS = 10000; // meta diária a ser atingida ou ultrapassada

    int passosHora;      // passos dados em uma hora específica
    int totalPassos = 0; // soma acumulada de passos ao longo do dia
    int horas = 0;        // conta quantas horas foram necessárias

    // Repete perguntando os passos de cada hora até bater a meta
    while (totalPassos < META_PASSOS) {
        horas++; // avança para a próxima hora de leitura

        printf("Informe os passos dados na hora %d: ", horas);
        scanf("%d", &passosHora);

        totalPassos += passosHora; // acumula ao total do dia

        printf("  -> Total acumulado ate agora: %d passos\n", totalPassos);
    }

    // Quando o laço termina, a meta já foi atingida ou ultrapassada
    printf("\nMeta de %d passos atingida!\n", META_PASSOS);
    printf("Total final: %d passos\n", totalPassos);
    printf("Foram necessarias %d hora(s) para atingir a meta.\n", horas);

    return 0;
}