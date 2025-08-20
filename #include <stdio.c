#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    // Carta 1
    char estado1;
    int codigo1;
    char nome1[50];
    int populacao1;
    float area1;
    float pib1; // em bilhões de reais
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2; // em bilhões de reais
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // Coleta Carta 1
    printf("Digite a letra do estado da primeira cidade: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira cidade: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%49s", nome1);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

    // Coleta Carta 2
    printf("Digite a letra do estado da segunda cidade: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda cidade: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%49s", nome2);

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibição
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;





}
