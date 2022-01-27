#include <stdio.h>
#include <stdlib.h>

void pilha()
{
    int v[10];
    //Inserção em pilha.
    for (int i = 0; i < 10; i++)
    {
        v[i] = i;
    }

    //Operação de remoção, exemplo, elemento v[n] = n, onde n = 7
    //0 1 2 3 4 5 6 7 8 9
    //Basicamente, tiro os elementos, removo e depois volto os elementos.
    int aux[10], n = 7;

    for (int j = 0; j < 10; j++)
    {
        if (j == n)
        {
            for (int k = n; k >= 0; k--)
            {
                v[k] = aux[k];
            }
            break;
        }
        else
        {
            aux[j] = v[j];
            v[j] = -1;
        }
    }
}

void fila()
{
    int v[10], aux[10];
    //Inserção em fila.
    for (int i = 0; i < 10; i++)
    {
        v[i] = i;
        aux[i] = i;
    }
    int n = 7;
    //Operação de remoção, exemplo, elemento v[n] = n, onde n = 7
    //0 1 2 3 4 5 6 7 8 9
    for (int j = 10; j > 0; j--)
    {
        if (j == n)
        {
            int cont = 0;
            for (int k = 10 - n; k < 10; k++)
            {
                v[k] = aux[cont];
                cont++;
            }
            cont = 0;
            for (int k = 10; k > n; k--)
            {
                v[cont] = aux[k];
                cont++;
            }
        }
    }
}

void deque()
{
    int v[10], aux[10];
    //Inserção em deque.
    for (int i = 0; i < 10; i++)
    {
        v[i] = i;
    }

    int n = 7;
    
    for (int j = 0; j < 10; j++)
    {
        if (j == n)
        {
            v[j] = -1; //"ELIMINAÇÃO"
            int cont = 0;
            for (int k = 10; k > n; k--)
            {
                aux[cont] = v[k];
                cont++;
                // printf("%i", aux[cont]);
            }
            cont = 0;
            for (int k = 10; k > n + 1; k--)
            {
                v[k] = aux[cont];
                cont++;
                printf("%i", v[k]);
            }
        }
    }
}

int main()
{
    int v[10];

    pilha();
    fila();
    deque();
    return 0;
}