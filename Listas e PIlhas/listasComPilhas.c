/*
    *Tanto inserção como remoção usam busca. Logo, percebe-se a importância da busca na computação.
*/
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
    int indice;
    char conteudo[30];
} Lista;

void imprimeLista(Lista *vetorLista)
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n Indice: %d", vetorLista[i].indice);
        printf("\n Conteudo: %s", vetorLista[i].conteudo);
    }
    printf("\n");
}

void ordenaLista(Lista *vetorLista)
{
    int i, j;
    Lista aux;

    for (j = 10 - 1; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (vetorLista[i].indice > vetorLista[i + 1].indice)
            {
                aux = vetorLista[i];
                vetorLista[i] = vetorLista[i + 1];
                vetorLista[i + 1] = aux;
            }
        }
    }
}

int main()
{
    Lista vetorLista[10]; //Criamos um vetor de lista.
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        vetorLista[i].indice = rand() % 10;
        strcpy(vetorLista[i].conteudo, "ABCD");
    }

    imprimeLista(vetorLista);
    ordenaLista(vetorLista);
    imprimeLista(vetorLista);

    return 0;
}