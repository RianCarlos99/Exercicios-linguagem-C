#include <stdio.h>
#include <math.h>

int main()
{
    printf("Entre com o tamanho da sequencia: ");
    int x;
    scanf("%d", &x);
    int acc = 0;

    for (int a = 0; a < x; a++)
    {
        printf("Entre com o proximo numero: ");
        int h;
        scanf("%d", &h);

        h = pow(h, 2);
        acc = acc + h;
    }

    printf("A soma do quadrado dos numeros apresentados e: %d", acc);
}