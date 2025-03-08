#include <stdio.h>

int main(){
  int tower_movies = 5, bishop_movies = 5, queen_movies = 8, horse_movies = 3;

  printf("Movimentação do cavalo: 2 casas à baixo e à esquerda\n");
  for (horse_movies; horse_movies > 0; horse_movies--)  {
    printf("Baixo\n");

    while (horse_movies == 2) {
      printf("Esquerda\n");
      horse_movies--;
    }
  }

  printf("\nMovimentação da torre: 5 casas à direita\n");
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