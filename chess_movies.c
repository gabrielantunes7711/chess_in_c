#include <stdio.h>

int main(){
  unsigned int tower_movies = 5, bishop_movies = 5, queen_movies = 8;

  printf("Movimentação da torre: 5 casas à direita\n");
  for (tower_movies; tower_movies > 0; tower_movies--)  {
    printf("Direita\n");
  }

  printf("\nMovimentação do bispo: 5 casas na diagonal para cima e à direita\n");
  while (bishop_movies > 0) {
    printf("Cima Direita\n");
    bishop_movies--;
  }

  printf("\nMovimentação da rainha: 8 casas à esquerda\n");
  do {
    printf("Esquerda\n");
    queen_movies--;
  } while (queen_movies > 0);
  
  return 0;
}