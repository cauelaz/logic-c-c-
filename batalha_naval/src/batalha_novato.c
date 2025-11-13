#include <stdio.h>

int main()
{
    int tabuleiro[10][10];

    // Inicializa tabuleiro com 0
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios
    int linha_h = 2;
    int coluna_h = 1;
    int linha_v = 5;
    int coluna_v = 7;

    // Posiciona navio horizontal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Exibe tabuleiro
    printf("=== BATALHA NAVAL ===\n\n");
    printf("   ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nNavio Horizontal: Linha %d, Colunas %d-%d\n", linha_h, coluna_h, coluna_h + 3 - 1);
    printf("Navio Vertical: Linhas %d-%d, Coluna %d\n", linha_v, linha_v + 3 - 1, coluna_v);

    return 0;
}