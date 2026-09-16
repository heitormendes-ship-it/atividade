#include <stdio.h>

int main() {
    const int NUM_CLIENTES = 10; // total de clientes a serem avaliados
    const float NOTA_MINIMA = 7.0; // abaixo disso, dispara o alerta

    float nota;        // nota informada em cada leitura
    float somaNotas = 0.0; // acumula as notas para depois calcular a média

    // Lê a nota de cada um dos 10 clientes
    for (int i = 1; i <= NUM_CLIENTES; i++) {
        printf("Informe a nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);

        somaNotas += nota; // soma para a média geral
    }

    // Calcula a média geral de atendimento
    float mediaGeral = somaNotas / NUM_CLIENTES;

    printf("\nMedia geral de atendimento: %.2f\n", mediaGeral);

    // Verifica se a média ficou abaixo do mínimo aceitável
    if (mediaGeral < NOTA_MINIMA) {
        printf("ALERTA: a media de atendimento esta abaixo do esperado!\n");
    } else {
        printf("Atendimento dentro do padrao esperado.\n");
    }

    return 0;
}