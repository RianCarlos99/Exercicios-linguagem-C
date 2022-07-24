#include <stdio.h>

double media_arit(double* e, int n)
{
    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma = soma + e[i];
    }
    double media = soma/n;
    return media;
}

int main(){
    double array[] = {14.25, 10.00, 15.50,14.40};
    printf("Media da array: %.2f", media_arit(array, 4));
}