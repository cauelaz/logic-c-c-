#include <stdio.h>

typedef struct // estrutura para representar uma carta
{
  char estado[50];
  char codigo[10];
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int numPontosTuristicos;
  float densidadePopulacional;
  float pibPerCapita;
} Carta;

int main()
{
  int opcao;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
  {
    Carta carta1, carta2;

    printf("Iniciando o jogo...\n");

    // Cadastro da primeira carta
    printf("=== Cadastro da primeira carta ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código da carta: ");
    scanf(" %s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da segunda carta ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código da carta: ");
    scanf(" %s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Calculando atributos derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibindo os dados cadastrados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

    // Comparação escolhida (exemplo: População)
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao)
    {
      printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    }
    else if (carta2.populacao > carta1.populacao)
    {
      printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    }
    else
    {
      printf("Resultado: Empate!\n");
    }
    break;
  }

  case 2:
    printf("Regras do Jogo:\n");
    printf("- Cada carta representa uma cidade.\n");
    printf("- São cadastrados atributos como população, área, PIB e pontos turísticos.\n");
    printf("- São calculados também densidade populacional e PIB per capita.\n");
    printf("- O vencedor é decidido comparando um atributo fixo.\n");
    printf("  (Neste exemplo: População)\n");
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
