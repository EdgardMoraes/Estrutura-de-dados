#include <stdio.h>
#include <stdlib.h>

int *ptr;
int x;

int main (){
    x = 10;
    printf("O valor de X é = %d\n", x);

    ptr = &x;
    printf("Ptr = %p\n", ptr);
    printf("O valor no endereço é: %d\n", *ptr);

    *ptr = 12;
    printf("O valor de X é = %d\n", x);
    printf("O valor no endereço é: %d\n", *ptr);

    return 0;
}
