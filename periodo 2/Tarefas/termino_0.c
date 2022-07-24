#include <stdio.h>

int main()
{
    int acc = 0;
    printf("Digite uma sequencia de numeros, e para saber o comprimento dessa sequencia termine ela com 0\n");

    for (int x = 0; x < 100; x++)
    {
        printf("Escreva o numero: ");
        int r;
        scanf("%d", &r);
        if (r == 0)
        {
            printf("comprimento da sequencia de numeros digitados: %d numeros", acc + 1);
            return 0;
        }
        acc += 1;
    }
}