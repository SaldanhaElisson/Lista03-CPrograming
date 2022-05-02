#include <stdio.h>

int main(){
    char str[1000];
    printf("Digite alguma string \n");
    scanf("%s", str);

    int i = 0;

    while (!(str[i] == '\0'))
    {
        i++;
    }

    printf("Na sua string há %d caracteres digitados", i);
    
    
    return 0;
}