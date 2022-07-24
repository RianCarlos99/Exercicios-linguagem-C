#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct {
  int i;
  float vet[N];
}Pilha;

Pilha *cria_pilha() {
  Pilha *p = (Pilha*)malloc(sizeof(Pilha));
  p->i=0;
}

int pilha_vazia(Pilha *p){
  if(p->i==0) return 1;
  else return 0;
}

void pilha_push(Pilha *p, float v){
  if(p->i==N){
    printf("Pilha em sua capacidade maxima\n");
    return;
  }

  p->vet[p->i] = v;
  p->i++;
}
int pilha_mostra(Pilha *p){
  for(int i=p->i-1; i>=0; i--){
    printf("%.1f  ", p->vet[i]);
  }
}

float pilha_pop(Pilha *p){
  float v;
  v = p->vet[p->i-1];
  p->i--;
  return v;
}

void pilha_libera(Pilha *p){
  free(p);
}
