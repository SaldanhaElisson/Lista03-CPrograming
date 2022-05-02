#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][5];
    int num;
    char qtd;



    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            matriz[l][c] = rand() % 100;
        }
    }

    printf("Digite um inteiro para ser verificado na matriz: ");
    scanf("%d", &num);

    // veriricando s existe
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(matriz[l][c] == num){
                qtd ++;
            }
        }
    }

    printf("O numero %d aparece %d vezes na seguinte matriz \n", num, qtd);

    // imprimindo matriz
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
          printf("[%d]\t", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}