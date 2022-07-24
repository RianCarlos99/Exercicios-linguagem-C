#include <stdio.h>

char *verif_ordem(int*v, int n)
{
    for(int i = 0; i < n - 1; i++){
        if (v[i] > v[i+1])
        {
            return "false";
        }
        return "true";
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,4,3};
    printf("Veracidade de uma array nao_crescente: %s", verif_ordem(a, 8));
}