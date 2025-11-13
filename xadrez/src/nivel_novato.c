#include <stdio.h>

int main()
{
  int i;

  // Torre se move em linha reta para a direita
  for (i = 0; i < 5; i++)
  {
    printf("Direita\n");
  }

  // Bispo se move na diagonal cima-direita
  i = 0;
  while (i < 5)
  {
    printf("Cima Direita\n");
    i++;
  }

  // Rainha pode se mover para esquerda
  i = 0;
  do
  {
    printf("Esquerda\n");
    i++;
  } while (i < 8);

  return 0;
}