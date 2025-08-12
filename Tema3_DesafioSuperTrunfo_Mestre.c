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
    printf("Agora você poderá escolher dois atributos para comparar as cartas!\n\n");
    printf("Vamos lá!!\n\n");

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
    printf("\nCarta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    // ================================
    // Escolha de dois atributos
    // ================================
    int atributo1, atributo2;

    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Super Poder\n"); // Adicionado

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Segundo menu (dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) { // Alterado para 6
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Densidade Populacional (menor vence)\n"); break;
                case 5: printf("5 - PIB per Capita\n"); break;
                case 6: printf("6 - Super Poder\n"); break; // Adicionado
            }
        }
    }
    printf("Digite a escolha do segundo atributo: ");
    scanf("%d", &atributo2);

    // ================================
    // Função auxiliar para pegar valores
    // ================================
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;

    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 5: valor1_attr1 = pibPerCapita1; valor2_attr1 = pibPerCapita2; break;
        case 6: valor1_attr1 = superPoder1; valor2_attr1 = superPoder2; break; // Adicionado
    }

    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 5: valor1_attr2 = pibPerCapita1; valor2_attr2 = pibPerCapita2; break;
        case 6: valor1_attr2 = superPoder1; valor2_attr2 = superPoder2; break; // Adicionado
    }

    // Comparação dos dois atributos (com regra especial da densidade)
    float pontos1 = 0, pontos2 = 0;

    // Primeiro atributo
    if (atributo1 == 4) { // densidade menor vence
        (valor1_attr1 < valor2_attr1) ? pontos1++ : (valor2_attr1 < valor1_attr1 ? pontos2++ : 0);
    } else {
        (valor1_attr1 > valor2_attr1) ? pontos1++ : (valor2_attr1 > valor1_attr1 ? pontos2++ : 0);
    }

    // Segundo atributo
    if (atributo2 == 4) { // densidade menor vence
        (valor1_attr2 < valor2_attr2) ? pontos1++ : (valor2_attr2 < valor1_attr2 ? pontos2++ : 0);
    } else {
        (valor1_attr2 > valor2_attr2) ? pontos1++ : (valor2_attr2 > valor1_attr2 ? pontos2++ : 0);
    }

    // Soma dos atributos (critério final)
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("%s - %s\n", nomeCidade1, nomeCidade2);
    printf("Atributo 1 (%d): %.2f vs %.2f\n", atributo1, valor1_attr1, valor2_attr1);
    printf("Atributo 2 (%d): %.2f vs %.2f\n", atributo2, valor1_attr2, valor2_attr2);
    printf("Soma dos atributos: %.2f vs %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}
