#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // =============================
    // Explicação das regras
    // =============================
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Iremos cadastrar informações de cartas para o supertrunfo\n");
    printf("Teremos 8 estados, cada um representado por uma letra de A até H\n");
    printf("Exemplo: A - SÃO PAULO\n");
    printf("Exemplo: B - RIO DE JANEIRO\n");
    printf("Um código para representar a carta caso seja do mesmo estado\n");
    printf("Exemplo: A01 - RIO DE JANEIRO\n");
    printf("Exemplo: A02 - NITERÓI\n");
    printf("Em seguida cadastraremos outros dados como:\n");
    printf("População dessa cidade\n");
    printf("Área da cidade em km²\n");
    printf("PIB dessa cidade\n");
    printf("Números de pontos turísticos da cidade\n");
    printf("Após cadastrar os dados, o programa irá calcular:\n");
    printf("A densidade, a renda percapita e o superpoder de cada carta\n");
    printf("E por fim irá mostrar uma comparação de valores\n");
    printf("Vamos lá!!\n");
    printf("\n");
    printf("\n");

    // Entrada dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações dos atributos
    // Troque o número abaixo para mudar o atributo:
    // 1 - População | 2 - Área | 3 - PIB | 4 - Densidade | 5 - PIB per capita
    int atributo = 3; // exemplo: comparando PIB

    printf("\n=== Comparação de Cartas ===\n");

    if (atributo == 1) {
        printf("Comparando População:\n");
        printf("%s: %lu\n", nomeCidade1, populacao1);
        printf("%s: %lu\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 2) {
        printf("Comparando Área:\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 3) {
        printf("Comparando PIB:\n");
        printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 4) {
        printf("Comparando Densidade Populacional (menor vence):\n");
        printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (atributo == 5) {
        printf("Comparando PIB per Capita:\n");
        printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
        printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
}
