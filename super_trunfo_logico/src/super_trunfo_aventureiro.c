#include <stdio.h>

int main() {
    // declaracao das variaveis da carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;
    
    // declaracao das variaveis da carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;
    
    printf("=== SUPER TRUNFO AVENTUREIRO ===\n\n");

    // entrada de dados - carta 1
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

    // entrada de dados - carta 2
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

    // calculos das cartas
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    printf("=== CARTAS CADASTRADAS ===\n\n");

    // exibicao das cartas
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

    // menu de comparacao
    int opcao;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");
    
    switch (opcao) {
        case 1:
            printf("Comparacao de cartas (Atributo: Populacao):\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 2:
            printf("Comparacao de cartas (Atributo: Area):\n");
            printf("Carta 1 - %s (%s): %.2f km2\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km2\n", cidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 3:
            printf("Comparacao de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): %.2f bilhoes\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhoes\n", cidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 4:
            printf("Comparacao de cartas (Atributo: Pontos Turisticos):\n");
            printf("Carta 1 - %s (%s): %d pontos\n", cidade1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%s): %d pontos\n", cidade2, estado2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 5:
            printf("Comparacao de cartas (Atributo: Densidade Demografica):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km2\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km2\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        default:
            printf("Opcao invalida! Por favor, escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}