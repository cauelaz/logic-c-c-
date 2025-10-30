#include <stdio.h>

int main() {
    // variaveis carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;
    
    // variaveis carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;
    
    printf("=== SUPER TRUNFO MESTRE ===\n\n");

    // entrada carta 1
    printf("--- CARTA 1 ---\n");
    printf("Estado (ex: SC): ");
    scanf("%s", estado1);
    
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Cidade: ");
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

    // entrada carta 2
    printf("--- CARTA 2 ---\n");
    printf("Estado (ex: SC): ");
    scanf("%s", estado2);
    
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Cidade: ");
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
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);
    
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
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    // variaveis para comparacao multipla
    int opcao1 = 0, opcao2 = 0;
    int valido = 0;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1 = 0, soma_c2 = 0;
    char nome_atrib1[40], nome_atrib2[40];

    // primeiro menu
    do {
        printf("\n=== PRIMEIRO ATRIBUTO ===\n");
        printf("Escolha o primeiro atributo:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade\n");
        printf("Opcao: ");
        scanf("%d", &opcao1);
        valido = (opcao1 >= 1 && opcao1 <= 5);
        if (!valido) printf("Opcao invalida!\n");
    } while (!valido);

    // segundo menu
    do {
        printf("\n=== SEGUNDO ATRIBUTO ===\n");
        printf("Escolha o segundo atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i == opcao1) continue;
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade\n"); break;
            }
        }
        printf("Opcao: ");
        scanf("%d", &opcao2);
        valido = (opcao2 >= 1 && opcao2 <= 5 && opcao2 != opcao1);
        if (!valido) printf("Opcao invalida!\n");
    } while (!valido);

    // obter valores dos atributos
    for (int i = 1; i <= 2; i++) {
        int op = (i == 1) ? opcao1 : opcao2;
        switch(op) {
            case 1:
                if (i == 1) { valor1_c1 = populacao1; valor1_c2 = populacao2; sprintf(nome_atrib1, "Populacao"); }
                else        { valor2_c1 = populacao1; valor2_c2 = populacao2; sprintf(nome_atrib2, "Populacao"); }
                break;
            case 2:
                if (i == 1) { valor1_c1 = area1; valor1_c2 = area2; sprintf(nome_atrib1, "Area"); }
                else        { valor2_c1 = area1; valor2_c2 = area2; sprintf(nome_atrib2, "Area"); }
                break;
            case 3:
                if (i == 1) { valor1_c1 = pib1; valor1_c2 = pib2; sprintf(nome_atrib1, "PIB"); }
                else        { valor2_c1 = pib1; valor2_c2 = pib2; sprintf(nome_atrib2, "PIB"); }
                break;
            case 4:
                if (i == 1) { valor1_c1 = pontos_turisticos1; valor1_c2 = pontos_turisticos2; sprintf(nome_atrib1, "Pontos Turisticos"); }
                else        { valor2_c1 = pontos_turisticos1; valor2_c2 = pontos_turisticos2; sprintf(nome_atrib2, "Pontos Turisticos"); }
                break;
            case 5:
                if (i == 1) { valor1_c1 = densidade1; valor1_c2 = densidade2; sprintf(nome_atrib1, "Densidade"); }
                else        { valor2_c1 = densidade1; valor2_c2 = densidade2; sprintf(nome_atrib2, "Densidade"); }
                break;
        }
    }

    // comparacao individual
    printf("\n=== RESULTADO ===\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n\n", cidade2, estado2);
    
    // primeiro atributo
    printf("Atributo 1: %s\n", nome_atrib1);
    if (opcao1 == 5) {
        printf("%s: %.2f\n", cidade1, valor1_c1);
        printf("%s: %.2f\n", cidade2, valor1_c2);
        printf("Vencedor 1: %s\n", (valor1_c1 < valor1_c2) ? cidade1 : (valor1_c2 < valor1_c1) ? cidade2 : "Empate");
    } else {
        printf("%s: %.2f\n", cidade1, valor1_c1);
        printf("%s: %.2f\n", cidade2, valor1_c2);
        printf("Vencedor 1: %s\n", (valor1_c1 > valor1_c2) ? cidade1 : (valor1_c2 > valor1_c1) ? cidade2 : "Empate");
    }
    
    // segundo atributo
    printf("\nAtributo 2: %s\n", nome_atrib2);
    if (opcao2 == 5) {
        printf("%s: %.2f\n", cidade1, valor2_c1);
        printf("%s: %.2f\n", cidade2, valor2_c2);
        printf("Vencedor 2: %s\n", (valor2_c1 < valor2_c2) ? cidade1 : (valor2_c2 < valor2_c1) ? cidade2 : "Empate");
    } else {
        printf("%s: %.2f\n", cidade1, valor2_c1);
        printf("%s: %.2f\n", cidade2, valor2_c2);
        printf("Vencedor 2: %s\n", (valor2_c1 > valor2_c2) ? cidade1 : (valor2_c2 > valor2_c1) ? cidade2 : "Empate");
    }

    // soma final
    float soma1 = valor1_c1, soma2 = valor1_c2;
    float soma3 = valor2_c1, soma4 = valor2_c2;
    if (opcao1 == 5) { soma1 = -valor1_c1; soma2 = -valor1_c2; }
    if (opcao2 == 5) { soma3 = -valor2_c1; soma4 = -valor2_c2; }
    soma_c1 = soma1 + soma3;
    soma_c2 = soma2 + soma4;
    
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma_c1);
    printf("%s: %.2f\n", cidade2, soma_c2);
    
    if (soma_c1 > soma_c2) {
        printf("\nVencedor final: %s!\n", cidade1);
    } else if (soma_c2 > soma_c1) {
        printf("\nVencedor final: %s!\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }
    
    return 0;
}