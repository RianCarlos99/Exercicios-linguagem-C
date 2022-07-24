#include <stdio.h>
#define tamanho 10

void preencheVetor(int vetor[], int tam) {
  for(int i=0; i<tam; i++) {
    vetor[i] = i;
    printf("%d\t", vetor[i]);
  }
}


int main() {
  int vetor[tamanho];
  preencheVetor(vetor, tamanho);
}