#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float a,b,c;
float res;

int main(){
    printf("Zadejte prvni cislo: ");
    scanf("%f", &a);
    printf("Zadejte hodnotu znamenka: ");
    scanf("%f", &b);
    printf("Zadejte druhe cislo: ");
    scanf("%f", &c);

    if(b == 1){
        res = a + c;
    }else if(b == 2){
        res = a - c;
    }else if(b == 3){
        res = a * c;
    }else if(b == 4){
        res = a / c;
    }
    printf("Vysledek = %f", res);
    return 0;
}
