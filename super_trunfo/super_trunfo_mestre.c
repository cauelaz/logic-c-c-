#include <stdio.h>

typedef struct
{
    char pais[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função auxiliar para exibir o nome do atributo
const char *nomeAtributo(int atributo)
{
    switch (atributo)
    {
    case 1:
        return "População";
    case 2:
        return "Área";
    case 3:
        return "PIB";
    case 4:
        return "Número de pontos turísticos";
    case 5:
        return "Densidade Demográfica";
    default:
        return "Desconhecido";
    }
}

// Função auxiliar para pegar o valor de um atributo
float valorAtributo(Carta c, int atributo)
{
    switch (atributo)
    {
    case 1:
        return c.populacao;
    case 2:
        return c.area;
    case 3:
        return c.pib;
    case 4:
        return c.numPontosTuristicos;
    case 5:
        return c.densidadeDemografica;
    default:
        return 0;
    }
}

// Função para determinar o vencedor em um atributo
int vencedorAtributo(Carta c1, Carta c2, int atributo)
{
    float v1 = valorAtributo(c1, atributo);
    float v2 = valorAtributo(c2, atributo);

    if (atributo == 5)
    { // regra invertida para densidade
        if (v1 < v2)
            return 1;
        else if (v2 < v1)
            return 2;
        else
            return 0;
    }
    else
    {
        if (v1 > v2)
            return 1;
        else if (v2 > v1)
            return 2;
        else
            return 0;
    }
}

int main()
{
    int opcao, atributo1, atributo2;

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

        // Calculando densidade demográfica
        carta1.densidadeDemografica = carta1.populacao / carta1.area;
        carta2.densidadeDemografica = carta2.populacao / carta2.area;

        // Escolha do primeiro atributo
        printf("\nEscolha o primeiro atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Escolha: ");
        scanf("%d", &atributo1);

        // Escolha do segundo atributo (dinâmico: sem repetir o primeiro)
        printf("\nEscolha o segundo atributo para comparar:\n");
        for (int i = 1; i <= 5; i++)
        {
            if (i != atributo1)
            {
                printf("%d. %s\n", i, nomeAtributo(i));
            }
        }
        printf("Escolha: ");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2)
        {
            printf("Erro: você não pode escolher o mesmo atributo duas vezes!\n");
            return 0;
        }

        // Exibição dos valores escolhidos
        printf("\n=== Comparação de Cartas ===\n");
        printf("%s - %s: %.2f\n", carta1.pais, nomeAtributo(atributo1), valorAtributo(carta1, atributo1));
        printf("%s - %s: %.2f\n", carta2.pais, nomeAtributo(atributo1), valorAtributo(carta2, atributo1));

        printf("%s - %s: %.2f\n", carta1.pais, nomeAtributo(atributo2), valorAtributo(carta1, atributo2));
        printf("%s - %s: %.2f\n", carta2.pais, nomeAtributo(atributo2), valorAtributo(carta2, atributo2));

        // Soma dos atributos
        float soma1 = valorAtributo(carta1, atributo1) + valorAtributo(carta1, atributo2);
        float soma2 = valorAtributo(carta2, atributo1) + valorAtributo(carta2, atributo2);

        printf("\nSoma dos atributos:\n");
        printf("%s: %.2f\n", carta1.pais, soma1);
        printf("%s: %.2f\n", carta2.pais, soma2);

        // Determinar vencedor pela soma
        if (soma1 > soma2)
        {
            printf("\nResultado: %s venceu!\n", carta1.pais);
        }
        else if (soma2 > soma1)
        {
            printf("\nResultado: %s venceu!\n", carta2.pais);
        }
        else
        {
            printf("\nResultado: Empate!\n");
        }

        break;
    }

    case 2:
        printf("\nRegras do Jogo:\n");
        printf("- Cada carta representa um país.\n");
        printf("- O jogador escolhe dois atributos diferentes para comparação.\n");
        printf("- Maior valor vence, exceto na densidade demográfica (menor vence).\n");
        printf("- Depois de comparar, é feita a soma dos atributos.\n");
        printf("- A maior soma vence, ou empate se os valores forem iguais.\n");
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
