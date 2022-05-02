#include <stdio.h>
#include <string.h>


int main(){
    char str1[1000];
    
    printf("Digite a primeira string: \n");
    scanf("%[^\n]", str1);

    int a = strlen(str1);

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    printf("\n");
    
    
    return 0;
}