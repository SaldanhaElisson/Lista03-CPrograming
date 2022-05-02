#include <stdio.h>
#include <string.h>

int main(){
    // verificando se duas strings são igauis sem o uso do strcmp() 
    char str1[1000];
    char str2[1000];

    printf("Digite a primeira string: \n");
    scanf("%[^\n]", str1);

    printf("Digite a segunda string: \n");
    getchar();
    scanf("%[^\n]", str2);

    if(!(strlen(str1) == strlen(str2))) puts("As strings não são iguais"); return 0;

    for (int i = 0; i < strlen(str1); i++)
    {
        if(!(str1[i] == str2[i])){
            printf("As strings não são iguais ");
            return 0;
        }
    }

    puts("As strings são iguais!!!! :D \n");
    
    return 0;
}