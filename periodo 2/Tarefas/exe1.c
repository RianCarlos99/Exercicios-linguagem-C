#include <stdio.h>

int raiz(int x)
{
    int l = 1;
    for (int t = 0; t <= x; t++)
    {
        if (l * l > x)
        {
            return l - 1;
        }
        if (l * l == x)
        {
            return l;
        }
        l = l + 1;
    }
}

int main()
{
    printf("Entre com o tamanho da sequencia de numeros: ");
    int x;
    scanf("%d", &x);

    int acc = 0;
    for (int f = 0; f < x; f++)
    {
        printf("\nEntre com o proximo numero: ");
        int r;
        scanf("%d", &r);
        int result = raiz(r);
        printf("A raiz inteira do numero apresentado: %d", result);
        acc += result;
    }
    printf("\nA soma de todas as raizes descritas e : %d", acc);
}
