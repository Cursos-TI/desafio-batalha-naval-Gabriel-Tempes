#include <stdio.h>

#define LINHA 10
#define COLUNA 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    char letra = 'A';
    char letraa = 'A';
    int numero = 1;
    int numeroa =1;
    int tabuleiro[LINHA][COLUNA];

    //Código para gerar as letras que farão parte do sistema de coordenadas.
   
     printf("### TABULEIRO DE BATALHA NAVAL ###\n");
     printf("\n");

    for (int i = 0; i < LINHA ; i++){
      printf("   %d", numero);
      numero++;
   }

   printf("\n");

   //exibição do tabuleiro vazio.
   for (int i = 0; i < LINHA; i++){

     
      printf("%c", letra);
      letra++;

      for (int j = 0; j < COLUNA; j++){
         
         tabuleiro[i][j] = 0; //exibe o tabuleiro vazio
         
         printf("  %d ", tabuleiro[i][j]);
      }
      printf("\n");
   }

   printf("\n");

   //posicionamento dos navios.

  for (int i = 3; i < 6; i++){
    tabuleiro[7][i] = 3; //define um navio da horizontal.
  }
  for (int i = 0; i < 3; i++){
   tabuleiro[1][i] = 3; //define um navio da horizontal.
 }
 for (int i = 7 ; i < 10; i++){
   tabuleiro[i][9] = 3; //define um navio da vertical.
 }
  for (int i = 2; i < 5; i++){
    tabuleiro[i][7] = 3; //define um navio da vertical.
  }
  for (int i = 4; i > 1; i--){
   tabuleiro[i][i] = 3; //define um navio da diagonal.
  }
  for (int i = 8; i > 5; i--){
   tabuleiro[i][i] = 3; //defne um navio da diagonal.
  }

  //exibição do tabuleiro com os navios posicionados.
  printf("### TABULEIRO DE BATALHA NAVAL ###\n");

  printf("\n");

    for (int i = 0; i < LINHA ; i++){
      printf("   %d", numeroa);
      numeroa++;
   }

   printf("\n");

   //exibição do tabuleiro vazio.
   for (int i = 0; i < LINHA; i++){

     
      printf("%c", letraa);
      letraa++;

      for (int j = 0; j < COLUNA; j++){

         printf("  %d ", tabuleiro[i][j]);

      }
      printf("\n");
   }

   printf("\n");
 
 
    return 0;
}
