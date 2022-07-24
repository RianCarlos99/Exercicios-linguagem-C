#include <stdio.h>
#include <stdlib.h>


int pesquisaVetor(int vet[], int tam, int valor){
  if(vet[tam]==valor){
    return tam;
  }
  
  if(tam==0){
    return -1;
  }

  return pesquisaVetor(vet, tam-1, valor);
}


int main() {
  int vetorRian[] = {1, 3, 5, 7, 9};
  int tamanho = 5;
  int valor = 9;
  int result = pesquisaVetor(vetorRian, tamanho, valor);
  printf("%d", result);
}