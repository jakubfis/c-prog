#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int x = rand() % 6 + 1;
    printf("%d", x);
    return 0;
}
