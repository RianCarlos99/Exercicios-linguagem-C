#include <stdio.h>
#include <stdlib.h>


void leArq (FILE *Arq, int t) {
  int soma = 0;
  int r;
  int vet[t];
  fread(vet, sizeof(int), t, Arq);
  printf("primeiro elemento: %d\nultimo elemento: %d\n", vet[0], vet[t-1]);
  for(int i = 0; i < t; i++) {
    soma+=vet[i];
  }
  printf("\nsoma de todos os elementos: %d", soma);
  fclose(Arq);
}

int main(){
  FILE *Arq;
  int vetor[] = {1000, 20, 300, 5}; 
  Arq = fopen("arquivo.txt", "wb");
  fwrite(vetor, sizeof(int), 4, Arq);
  fclose(Arq);
  Arq = fopen("arquivo.txt", "rb");
  leArq(Arq, 4);
}