#include <stdio.h>
#include <stdlib.h>

int main()
{
    // crie uma variável do tipo ponteiro
    int *p;

    // reserve o espaço em memória e acordo com tipo primitivo
    p = (int *)malloc(sizeof(int));

    // teste condicional para verificar se existe retorno de memoria disponivel
    if (p == NULL)
    {
        printf("Error!\n");
    }
    else
    {
        *p = 10;
        printf("P: %d\n", *p);
    // Desalocando memória no final do codigo
        free(p);
    
    
    
    }

    return 0;
}
