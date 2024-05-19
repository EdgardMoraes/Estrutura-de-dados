#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
int x;
int *y;

printf("Informe o valor para a variável x: \n");
scanf ("%d", &x);

y = &x;
*y = 12;

y = y + 1;

*y += 5;

printf ("O valor da váriavel x é: %d\n",x);
printf ("O valor da váriavel y é: %d\n",*y);


return 0;
}
