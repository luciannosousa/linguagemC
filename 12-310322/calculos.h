#include <stdio.h>
#include <stdlib.h>

void soma(int array[], int tamanho)
{
    int rs = 0;
    for (int i = 0; i < tamanho; i++)
    {
        rs += array[i];
    }

    printf("%d\n", rs);
}

void maiorvalor(int array[], int tamanho)
{
    int m = array[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (array[i] > m)
        {
            m = array[i];
        }
    }

    printf("o maio valor e %d\n", m);
}