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
    int linha_d1 = 0;
    int coluna_d1 = 4;
    int linha_d2 = 1;
    int coluna_d2 = 8;

    // Valida limites do tabuleiro
    if (coluna_h + 3 > 10 || linha_v + 3 > 10 || linha_d1 + 3 > 10 || coluna_d1 + 3 > 10 || linha_d2 + 3 > 10 || coluna_d2 - 3 + 1 < 0)
    {
        printf("Erro: Navio fora dos limites!\n");
        return 1;
    }

    // Posiciona navio horizontal
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linha_h][coluna_h + i] != 0)
        {
            printf("Erro: Navios se sobrepondo!\n");
            return 1;
        }
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linha_v + i][coluna_v] != 0)
        {
            printf("Erro: Navios se sobrepondo!\n");
            return 1;
        }
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Posiciona navio diagonal 1
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linha_d1 + i][coluna_d1 + i] != 0)
        {
            printf("Erro: Navios se sobrepondo!\n");
            return 1;
        }
        tabuleiro[linha_d1 + i][coluna_d1 + i] = 3;
    }

    // Posiciona navio diagonal 2
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[linha_d2 + i][coluna_d2 - i] != 0)
        {
            printf("Erro: Navios se sobrepondo!\n");
            return 1;
        }
        tabuleiro[linha_d2 + i][coluna_d2 - i] = 3;
    }

    // Exibe tabuleiro
    printf("=== BATALHA NAVAL ===\n\n");
    printf("   ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nNavio Horizontal: Linha %d, Colunas %c-%c\n", linha_h + 1, 'A' + coluna_h, 'A' + coluna_h + 3 - 1);
    printf("Navio Vertical: Linhas %d-%d, Coluna %c\n", linha_v + 1, linha_v + 3, 'A' + coluna_v);
    printf("Navio Diagonal 1: Linhas %d-%d, Colunas %c-%c\n", linha_d1 + 1, linha_d1 + 3, 'A' + coluna_d1, 'A' + coluna_d1 + 3 - 1);
    printf("Navio Diagonal 2: Linhas %d-%d, Colunas %c-%c\n", linha_d2 + 1, linha_d2 + 3, 'A' + coluna_d2 - 3 + 1, 'A' + coluna_d2);

    return 0;
}