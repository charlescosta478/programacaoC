#include <stdio.h>

int main (){

    // Dados carta 1
    char estado1[50];
    char codigocarta1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpodercarta1;

    // Dados carta 2
    char estado2[50];
    char codigocarta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpodercarta2;

    //Entrada dos dados da carta 1
    printf("Insira os dados da carta 1\n");

    printf("Qual é o nome do Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Escolha o número da carta(Exemplo 01): ");
    scanf(" %3s", codigocarta1);

    printf("Qual é o nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Qual é a área (km²): ");
    scanf("%f", &area1);

    printf("Qual é o PIB (Em bilhões): ");
    scanf("%f", &pib1);

    printf("Qual é o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    //Entrada da carta 2
    printf("\n");

    printf("Insira os dados da carta 2\n");
    
    printf("\n");

    printf("Qual é o nome do Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Escolha o número da carta(Exemplo 02): ");
    scanf(" %3s", codigocarta2);

    printf("Qual é o nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Qual é a área (km²): ");
    scanf("%f", &area2);

    printf("Qual é o PIB (Em bilhões): ");
    scanf("%f", &pib2);

    printf("Qual é o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita1 = pib2 / populacao2;
    superpodercarta1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidadepopulacional1;
    superpodercarta2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidadepopulacional2;


    //Imprimindo a carta 1
    printf("Essa é a carta 01:\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %c%s\n", estado1[0], codigocarta1); // Nesse caso peguei a primeira letra do estado e o numero do código.
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.3f\n", densidadepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f", superpodercarta1);

    printf("\n");

    //Imprimindo a carta 2
    printf("\n");

    printf("Essa é a carta 02:\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", estado2[0], codigocarta2); // Nesse caso peguei a primeira letra do estado e o numero do código.
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.3f\n", densidadepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f", superpodercarta2);

    return 0;
}
