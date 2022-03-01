#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x;
char a;

int main() {
    srand(time(NULL));
    printf("Vygenerovane heslo = ");
    for(int i = 0; i <= 15; i++ ){
        x = rand() % 3 + 1;
        if(x == 1){
            a = rand() % 26 + 97;
            printf("%c", a);
        }else if(x == 2){
            a = rand() % 26 + 65;
            printf("%c", a);
        }else if(x == 3){
            a = rand() % 9 + 48;
            printf("%c", a);
        }
        }
    return 0;
}