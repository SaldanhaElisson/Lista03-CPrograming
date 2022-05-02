#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(){
    int vetor[TAM];
    int a, b, aux;

    printf("Digite o inicio do intervalo: \n");
    scanf("%d", &a);

    printf("Digite o fim do intervalo: \n");
    scanf("%d", &b);

    // gerando vetores aleatorio no intervalo dado pelo usuario
        printf("%d, ", b-a);

     for(int i = 0; i < TAM ; i++){
        vetor[i] = (rand() % (b-a)) + a;
        }

    for (int k=0; k<TAM; k++){
        if (vetor[k]<vetor[k+1]){
            aux = vetor[k];
            vetor[k] = vetor[k+1];
            vetor[k+1] = aux;
            
            // vetor[k] = vetor[k]^vetor[k+1];
            // vetor[k+1] = vetor[k]^vetor[k+1]; 
            // vetor[k] = vetor[k]^vetor[k+1];              
        }
    }

    for(int i = 0; i < TAM; i++){
        printf("%d, ", vetor[i]);
    }

    return 0;
}