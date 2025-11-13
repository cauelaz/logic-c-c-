#include <stdio.h>

// Torre se move para direita - recursão
void movimentoTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        movimentoTorre(casas - 1); // chama ela mesma com uma casa a menos
    }
}

// Bispo se move na diagonal cima-direita
void movimentoBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima Direita\n");
        movimentoBispo(casas - 1); 
    }
}

// Rainha se move para esquerda
void movimentoRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

// loop de fora controla o mov vertical
// loop de dentro controla o mov horizontal
void movimentoBispoLoopsAninhados(int casas)
{    
    for (int i = 0; i < casas; i++)
    {
        printf("Cima\n");
        
        for (int j = 0; j < 1; j++) 
        {
            printf("Direita\n");
        }
    }
}

// Cavalo tem movimento em L - 2 casas para cima, 1 para direita
void movimentoCavaloComplexo(int movimentos)
{
    for (int movimento = 0; movimento < movimentos; movimento++)
    {
        printf("Movimento L %d\n", movimento + 1);
        
        // duas casas para cima
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        
        // uma casa para direita
        for (int j = 0; j < 1; j++)
        {
            printf("Direita\n");
        }
        
        if (movimento < movimentos - 1)
        {
            continue; 
        }
    }
}

// Agora vou fazer o cavalo com múltiplas variáveis
void movimentoCavaloAvancado(int movimentos)
{
    int contadorMovimentos = 0; 
    int casasVerticais = 2; 
    int casasHorizontais = 1; 
    
    for (int i = 0, j = 0; i < movimentos && contadorMovimentos < movimentos * 3; i++, contadorMovimentos++)
    {
        // movimento vertical
        if (j < casasVerticais)
        {
            printf("Cima\n");
            j++;
            continue;
        }
        
        // movimento horizontal
        if (j == casasVerticais)
        {
            printf("Direita\n");
            j = 0; 
        }
        
        if (contadorMovimentos >= movimentos * 3)
        {
            break; 
        }
    }
}

int main()
{
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO = 2;
    
    // Torre se move para direita usando recursão
    movimentoTorre(CASAS_TORRE);

    printf("\n");
    
    // Bispo se move na diagonal usando recursão
    movimentoBispo(CASAS_BISPO);

    printf("\n");
    
    // Rainha se move para esquerda usando recursão
    movimentoRainha(CASAS_RAINHA);

    printf("\n");
    
    // Bispo com loops aninhados
    movimentoBispoLoopsAninhados(CASAS_BISPO);

    printf("\n");
    
    // Cavalo com loops complexos
    movimentoCavaloComplexo(MOVIMENTOS_CAVALO);

    printf("\n");
    
    // Cavalo com múltiplas variáveis
    movimentoCavaloAvancado(MOVIMENTOS_CAVALO);
    
    printf("\n=== FIM DOS MOVIMENTOS ===\n");
    
    return 0;
}