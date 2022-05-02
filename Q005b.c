#include <stdio.h>
#include <string.h>

int main(){
    // cocatenando strings com o uso do strcat()
    char str1[1000];
    char str2[1000];

    printf("Digite a primeira string: \n");
    scanf("%[^\n]", str1);

    printf("Digite a segunda string: \n");
    getchar();
    scanf("%[^\n]", str2);

    strcat(str1, str2);

    puts(str1);
    
return 0;
}