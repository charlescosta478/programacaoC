#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada - Carta 1
    printf("Digite os dados da Carta 1:\n");
    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nomeCidade1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);

    // Cálculo - Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Entrada - Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nomeCidade2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);

    // Cálculo - Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    int venceuPopulacao = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPIB = pib1 > pib2;
    int venceuPontos = pontosTuristicos1 > pontosTuristicos2;
    int venceuDensidade = densidade1 < densidade2;
    int venceuPIBpc = pibPerCapita1 > pibPerCapita2;
    int venceuSuperPoder = superPoder1 > superPoder2;

    // Resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", venceuPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", venceuArea);
    printf("PIB: Carta 1 venceu (%d)\n", venceuPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceuPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceuDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceuPIBpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceuSuperPoder);

    return 0;
}
