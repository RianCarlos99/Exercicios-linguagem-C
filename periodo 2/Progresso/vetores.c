#include <stdio.h>

int main(){
    printf("Escreva o numero de alunos: ");
    int i;
    scanf("%d", &i);
    int vet[i];
    int aprovados, media, soma = 0;

    for (int r = 0; r < i; r++){
        printf("Escreva a proxima nota: ");
        scanf("%d", &vet[r]);
        soma += vet[r];
    }
    aprovados = 0;
    for (int r = 0; r < i; r++){
        media = soma/i;
        if (vet[r] > media) ++ aprovados;
    }

    printf("O numero de alunos aprovados sao: %d", aprovados);
}
