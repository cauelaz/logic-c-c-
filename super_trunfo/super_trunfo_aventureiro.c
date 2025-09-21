#include <stdio.h>

typedef struct
{
    char pais[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadeDemografica;
    float pibPerCapita;
} Carta;

int main()
{
    int opcao, atributo;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
        Carta carta1, carta2;

        // Cadastro da primeira carta
        printf("\n=== Cadastro da primeira carta ===\n");
        printf("Nome do país: ");
        scanf(" %[^\n]", carta1.pais);
        printf("População: ");
        scanf("%d", &carta1.populacao);
        printf("Área (km²): ");
        scanf("%f", &carta1.area);
        printf("PIB: ");
        scanf("%f", &carta1.pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &carta1.numPontosTuristicos);

        // Cadastro da segunda carta
        printf("\n=== Cadastro da segunda carta ===\n");
        printf("Nome do país: ");
        scanf(" %[^\n]", carta2.pais);
        printf("População: ");
        scanf("%d", &carta2.populacao);
        printf("Área (km²): ");
        scanf("%f", &carta2.area);
        printf("PIB: ");
        scanf("%f", &carta2.pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &carta2.numPontosTuristicos);

        // Calculando atributos derivados
        carta1.densidadeDemografica = carta1.populacao / carta1.area;
        carta2.densidadeDemografica = carta2.populacao / carta2.area;
        carta1.pibPerCapita = carta1.pib / carta1.populacao;
        carta2.pibPerCapita = carta2.pib / carta2.populacao;

        // Menu de escolha do atributo
        printf("\nEscolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &atributo);

        // Comparação de acordo com o atributo
        printf("\n=== Comparação de Cartas ===\n");
        switch (atributo)
        {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", carta1.pais, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.pais, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.pais, carta1.area);
            printf("%s: %.2f km²\n", carta2.pais, carta2.area);
            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.pais, carta1.pib);
            printf("%s: %.2f\n", carta2.pais, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Número de pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", carta1.pais, carta1.numPontosTuristicos);
            printf("%s: %d pontos turísticos\n", carta2.pais, carta2.numPontosTuristicos);
            if (carta1.numPontosTuristicos > carta2.numPontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.numPontosTuristicos > carta1.numPontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo: Densidade demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.pais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.pais, carta2.densidadeDemografica);
            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("Resultado: %s venceu!\n", carta1.pais);
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica)
                printf("Resultado: %s venceu!\n", carta2.pais);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
        break;
    }

    case 2:
        printf("\nRegras do Jogo:\n");
        printf("- Cada carta representa um país.\n");
        printf("- São cadastrados atributos como população, área, PIB e pontos turísticos.\n");
        printf("- Também é calculada a densidade demográfica.\n");
        printf("- O jogador escolhe qual atributo será usado para comparação.\n");
        printf("- Regra: maior valor vence, exceto densidade (menor vence).\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
