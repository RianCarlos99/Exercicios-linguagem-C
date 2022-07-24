#include <stdio.h>
#include <stdbool.h>

bool divisao(int k)
{
    if (k % 3 == 0)
    {
        return true;
    }
    else if (k % 3 == 1)
    {
        return true;
    }
    else if (k % 3 == 2)
    {
        return true;
    }
    return false;
}

int main()
{

    int x;
    printf("Digite o tamanho da sequencia:");
    scanf("%d", &x);

    int acc = 0;
    for (int i = 0; i < x; i++)
    {

        printf("Escreva o proximo numero a ser testado: ");
        int n;
        scanf("%d", &n);
        if (divisao(n))
        {
            acc += 1;
        }
    }
    printf("%d de %d numeros quando divididos por 3 tem resto 0,1 ou 2", acc, x);
}