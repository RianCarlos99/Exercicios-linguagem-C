#include <stdio.h>

int soma_fatorial(int k)
{
    int acc = 0;
    for (int i = k; i > 0; i--)
    {
        acc += i;
    }
    return acc;
}

int main()
{
    printf("Digite o maior valor da sequencia que seja maior ou igual a 1: ");
    int x;
    scanf("%d", &x);
    int soma_total = soma_fatorial(x);
    int acc = 0;
    for (int i = 0; i < x - 1; i++)
    {
        printf("Digite os valores compreendidos entre 0 < x <= %d: ", x);
        int f;
        scanf("%d", &f);
        acc += f;
    }
    int valor_faltante = soma_total - acc;
    printf("O valor que falta na sequencia: %d", valor_faltante);
}