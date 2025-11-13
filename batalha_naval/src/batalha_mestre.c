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

    // Cria matrizes de habilidade (5x5)
    int tamanho_habilidade = 5;
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Cone
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int centro = tamanho_habilidade / 2;
            if (j >= centro - i && j <= centro + i && i <= centro)
            {
                cone[i][j] = 1;
            }
            else
            {
                cone[i][j] = 0;
            }
        }
    }

    // Cruz
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int centro = tamanho_habilidade / 2;
            if (i == centro || j == centro)
            {
                cruz[i][j] = 1;
            }
            else
            {
                cruz[i][j] = 0;
            }
        }
    }

    // Octaedro
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int centro = tamanho_habilidade / 2;
            int dist_i = (i > centro ? i - centro : centro - i);
            int dist_j = (j > centro ? j - centro : centro - j);
            if (dist_i + dist_j <= centro)
            {
                octaedro[i][j] = 1;
            }
            else
            {
                octaedro[i][j] = 0;
            }
        }
    }

    // origem das habilidades
    int linha_cone = 0;
    int coluna_cone = 2;
    int linha_cruz = 3;
    int coluna_cruz = 6;
    int linha_octaedro = 6;
    int coluna_octaedro = 3;

    // Aplica habilidade Cone
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int linha_tab = linha_cone + i;
            int coluna_tab = coluna_cone + j - tamanho_habilidade / 2;
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10)
            {
                if (cone[i][j] == 1)
                {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }

    // Aplica habilidade Cruz
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int linha_tab = linha_cruz + i - tamanho_habilidade / 2;
            int coluna_tab = coluna_cruz + j - tamanho_habilidade / 2;
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10)
            {
                if (cruz[i][j] == 1)
                {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }

    // Aplica habilidade Octaedro
    for (int i = 0; i < tamanho_habilidade; i++)
    {
        for (int j = 0; j < tamanho_habilidade; j++)
        {
            int linha_tab = linha_octaedro + i - tamanho_habilidade / 2;
            int coluna_tab = coluna_octaedro + j - tamanho_habilidade / 2;
            if (linha_tab >= 0 && linha_tab < 10 && coluna_tab >= 0 && coluna_tab < 10)
            {
                if (octaedro[i][j] == 1)
                {
                    tabuleiro[linha_tab][coluna_tab] = 5;
                }
            }
        }
    }

    // Coordenadas dos navios
    int linha_h = 0;
    int coluna_h = 7;
    int linha_v = 1;
    int coluna_v = 9;
    int linha_d1 = 7;
    int coluna_d1 = 0;
    int linha_d2 = 7;
    int coluna_d2 = 9;

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
    printf("\nHabilidade Cone: Linha %d, Coluna %c\n", linha_cone + 1, 'A' + coluna_cone);
    printf("Habilidade Cruz: Linha %d, Coluna %c\n", linha_cruz + 1, 'A' + coluna_cruz);
    printf("Habilidade Octaedro: Linha %d, Coluna %c\n", linha_octaedro + 1, 'A' + coluna_octaedro);

    return 0;
}
