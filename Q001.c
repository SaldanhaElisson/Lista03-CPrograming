#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetorTipoFloat[15];

    // gerando vetores aleatores;
    for(int i = 0; i <= 15; i++){
        vetorTipoFloat[i] = (float)(rand() % 100) / 10; 
    }

    // verificando qual elemento é maior
    for(int i = 0; i <= 15; i++){
        vetorTipoFloat[1] = vetorTipoFloat[1] < vetorTipoFloat[i]? vetorTipoFloat[i]: vetorTipoFloat[1];
    }

    // imprimindo os valores
    for(int i = 0; i <= 15; i++){
        printf("%.2f \n", vetorTipoFloat[i]);
    }

    // imprimindo o maior vetor
    printf("O maior numero do vetor é: %.2f", vetorTipoFloat[1]);
    
}