#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int vetore[3]; 
    float mediaA = 0;
    double mediaG = 1;


    for(int i = 0; i < 3; i++){
        vetore[i] = rand() % 19;
        mediaA += vetore[i];
        mediaG *= vetore[i];
    }

    printf("Media aritmetica: %.2f \n", mediaA/3);
    printf("Media geometrica: %.2f \n", pow(mediaG, 1/3));



    return 0;
}