#include <stdio.h>

char *verif_ordem(int *b, int *e)
{
    for (int i = 0; b != e; b++)
    {
        if (b[i] > b[i + 1])
        {
            return "false";
        }
    }
    return "true";
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("Veracidade de uma array nao_crescente: %s", verif_ordem(a, a + 5));
}