#include <stdio.h>
#include <string.h>

int main(){
    char string[1000];
    char caractere;

    printf("Digite alguma frase ou palavra \n");
    scanf("%[^\n]", string);

    printf("\n");

    printf("Digite algum caracetere para ser verificado na frese/palavra digitada \n");
    getchar();
    scanf("%c", &caractere);

    // verificando se existe o caractere na string
    for(int i = 0; i < strlen(string); i++){
        if( string[i] == caractere){
            printf("A letra %c existe na frase %s", caractere, string);
            return 0;
        } 
    }
    printf("Infelizmente o caractere %c não existe na string :( \n", caractere);
    return 0;
}