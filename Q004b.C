#include <stdio.h>
#include <string.h>

int main(){
    // utilizando strcmp();
    char str1[1000];
    char str2[1000];

    printf("Digite a primeira string: \n");
    scanf("%[^\n]", str1);

    printf("Digite a segunda string: \n");
    getchar();
    scanf("%[^\n]", str2);

    if(!(strcmp(str1, str2))) {
        
        printf("As duas strings são iguais"); 
        return 0;
    }
    
    puts("As duas strigs não são iguais");

    return 0;
}