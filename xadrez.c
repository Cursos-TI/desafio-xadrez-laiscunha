#include <stdio.h>


// Desafio: Movimentação das Peças de Xadrez (Nível Novato) //
 

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

   
    printf("Movimentando a Torre (%d casas para a direita):\n", casasTorre);
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 
  
    printf("Movimentando o Bispo (%d casas para cima e direita):\n", casasBispo);
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++; 
    }
    printf("\n");

    printf("Movimentando a Rainha (%d casas para a esquerda):\n", casasRainha);
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;

    } while (contadorRainha <= casasRainha);

    return 0;
}