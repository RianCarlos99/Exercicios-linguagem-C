#include <stdio.h>
#include <stdbool.h>

bool divisao(int k)
{
    if (k % 3 == 0)
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
    printf("O total de numeros divisiveis por tres: %d de %d numeros", acc, x);
}