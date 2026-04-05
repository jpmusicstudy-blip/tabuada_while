#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador = 0;
    int resultado;
    printf("INFORMA UM NUMERO: ");
    scanf("%d", &numero);

    while(contador <= 10)
    {
        resultado = numero * contador;
        printf("%d x %d = %d\n", contador, numero, resultado);

        contador = contador + 1;
    }
    return 0;
}
