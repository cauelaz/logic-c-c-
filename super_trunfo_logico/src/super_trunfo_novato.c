#include <stdio.h>

int main() {
    // variaveis da primeira carta
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;
    
    // variaveis da segunda carta
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;
    
    printf("=== SUPER TRUNFO NOVATO ===\n\n");

    // entrada dos dados da primeira carta
    printf("--- CARTA 1 ---\n");
    printf("Estado (ex: SC): ");
    scanf("%s", estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (km2): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");

    // entrada dos dados da segunda carta
    printf("--- CARTA 2 ---\n");
    printf("Estado (ex: SC): ");
    scanf("%s", estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (km2): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");

    // calculos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    printf("=== CARTAS CADASTRADAS ===\n\n");

    // mostra as cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f bilhoes\n", pib_per_capita1);
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f bilhoes\n", pib_per_capita2);

    // comparação por população
    printf("\nComparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}