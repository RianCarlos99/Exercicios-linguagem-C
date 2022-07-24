#include <stdio.h>

char* verif_prefix(int* v, int n, int*m, int i)
{
    if (n > i)
    {
        return "Impossivel fazer a comparacao :(";
    }
    
    for(int r = 0; r < n; r++){
        
        if(v[r]!= m[r])
        {
            return "false";
        }
    }
    return "true";
}

int main()
{
    int vetor_m[] = {5,6,7,1,2,3};
    int m = 6;
    int n = 0;
    printf("Escreva o tamanho da array: ");
    scanf("%d", &n);
    int vetor_v[n];

    for(int i = 0; i < n; i++){
        printf("Escreva o %do numero: ", i);
        scanf("%d", &vetor_v[i]);
    }
    printf("Veracidade da comparacao: %s", verif_prefix(vetor_v, n, vetor_m, m));
}