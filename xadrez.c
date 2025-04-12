#include <stdio.h>
#include <string.h>

void movimentoRainha(int casas){ //Recursividade para movimentar a Rainha
  if(casas > 0){
    printf("Rainha moveu para esquerda! \n");
    movimentoRainha(casas - 1);
  }
}

void movimentobispo(int casas){ //Recursividade para movimentar o Bispo
  if(casas > 0){
    printf("Bispo moveu para cima, direita! \n");
    movimentobispo(casas - 1);
  }
}

void movimentoTorre(int casas){ //Recursividade para movimentar a Torre
  if(casas > 0){
    printf("Torre moveu para direita! \n");
    movimentoTorre(casas - 1);
  }
}


int main() {
  
  char mov1 [20], mov2 [20];

  movimentoRainha(8); //Chamando a recursividade da Rainha

  movimentobispo(5); //Chamando a recursividade do Bispo

  movimentoTorre(5); //Chamando a recursividade da Torre

  
  printf("Pra onde o cavalo deve mover? \n"); //Perguntando ao usuario para onde ele vai mover o Cavalo
  scanf("%s", &mov1); 
  scanf("%s", &mov2);

  for(int i = 0; i < 1; i++){

     for (int j = 0; j < 2; j++)
     {
      printf("Cavalo moveu para %s \n", mov1); //primeiro movimento do cavalo
     }

     printf("Cavalo moveu para %s \n", mov2); //segundo movimento do cavalo
     
  }
  
  
  
}
