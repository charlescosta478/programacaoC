#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Mostra as opções
    printf("Escolha:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    // Lê a escolha do jogador com validação
    do {
        printf("Digite sua escolha (1, 2 ou 3): ");
        scanf("%d", &jogador);
    } while (jogador < 1 || jogador > 3);

    // Geração da escolha do computador (1 a 3)
    computador = rand() % 3 + 1;

    // Mapeia números para nomes
    const char *opcoes[] = {"", "Pedra", "Papel", "Tesoura"};

    printf("Você escolheu: %s\n", opcoes[jogador]);
    printf("Computador escolheu: %s\n", opcoes[computador]);

    // Verifica resultado
    if (jogador == computador) {
        printf("Empate! Ambos escolheram %s. Tente novamente.\n", opcoes[jogador]);
    } else if (
        (jogador == 1 && computador == 3) ||
        (jogador == 2 && computador == 1) ||
        (jogador == 3 && computador == 2)
    ) {
        printf("Parabéns, você venceu!\n");
    } else {
        printf("Infelizmente, você perdeu.\n");
    }

    return 0;
}
