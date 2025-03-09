#include <stdio.h>

void tower_move(int houses){
  if (houses > 0) {
    printf("Direita\n");

    tower_move(houses - 1);
  }
}

void bishop_move(int houses){
  for (int i = houses; i > 0; i--){
    printf("Cima ");

    for (int j = 0; j < 1; j++){
      printf("Direita\n");
    }
  }
}

void queen_move(int houses){
  if (houses > 0) {
    printf("Esquerda\n");

    queen_move(houses - 1);
  }
}

void horse_move(int houses) {
  for (int i = houses; i > 1; i--)  {
    printf("Cima\n");

    for (int j = 2; j == i; j++) {
      printf("Direita\n");
    }
  }
}

int main(){
  int tower_movies = 5, bishop_movies = 5, queen_movies = 8, horse_movies = 3;

  printf("Movimentacao do cavalo: 2 casas a cima e a direita\n");
  horse_move(horse_movies);

  printf("\nMovimentacao da torre: 5 casas a direita\n");
  tower_move(tower_movies);

  printf("\nMovimentacao do bispo: 5 casas na diagonal para cima e a direita\n");
  bishop_move(bishop_movies);

  printf("\nMovimentacao da rainha: 8 casas a esquerda\n");
  queen_move(queen_movies);
  
  return 0;
}