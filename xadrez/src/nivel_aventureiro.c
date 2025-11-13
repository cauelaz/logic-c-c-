#include <stdio.h>

int main()
{
  int i, j;

  // Torre se move em linha reta para a direita
  for (i = 0; i < 5; i++)
  {
    printf("Direita\n");
  }
  
  printf("\n");

  // Bispo se move na diagonal cima-direita
  i = 0;
  while (i < 5)
  {
    printf("Cima Direita\n");
    i++;
  }

  printf("\n");

  // Rainha pode se mover para esquerda
  i = 0;
  do
  {
    printf("Esquerda\n");
    i++;
  } while (i < 8);

  printf("\n");

  // Cavalo tem movimento em L - 2 casas para baixo, 1 para esquerda
  for (i = 0; i < 1; i++) // L
  {
    j = 0;
    while (j < 2) 
    {
      printf("Baixo\n"); // duas casas para baixo
      j++;
    }
    printf("Esquerda\n"); // uma casa para esquerda
  }

  return 0;
}