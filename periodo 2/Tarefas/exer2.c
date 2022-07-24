#include <stdio.h>

int max_number(int x, int *p)
{
    int m = p[0];
    for (int i = 0; i < x; i++)
    {
        if (p[i] > m)
        {
            m = p[i];
        }
    }
    return m;
}

int main()
{

    printf("Entre com o tamanho da sequencia: ");
    int x;
    scanf("%d", &x);

    int numeros[x];

    for (int t = 0; t < x; t++)
    {
        printf("Escreva o proximo numero: ");
        int y;
        scanf("%d", &y);
        numeros[t] = y;
    }

    int r = max_number(x, numeros);
    printf("\nO maior valor armazenado foi: %d", r);
}