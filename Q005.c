#include <stdio.h>

int main(){
    // cocatenando strings sem uso do strcat()
    char str1[1000];
    char str2[1000];

    printf("Digite a primeira string: \n");
    scanf("%[^\n]", str1);

    printf("Digite a segunda string: \n");
    getchar();
    scanf("%[^\n]", str2);

    // descobrindo a quantidade de caracteres da primeira strings
    int i = 0;
    while(!(str1[i] == '\0'))
    {
        i++;
    }
    
    // concatenando a str2 com a str1
    for (int a = 0; a <= i; a++)
    {
        str1[i+a] = str2[a];
    }

    printf("%s \n", str1);
    return 0;
}