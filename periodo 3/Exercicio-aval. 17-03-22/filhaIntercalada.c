#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *fila_intercala(Fila *f1, Fila *f2){
  Fila *aux1 = fila_cria();       //fila para auxiliar com a fila f1 na retirada
  Fila *aux2 = fila_cria();       //fila para auxiliar com a fila f2 na retirada
  Fila *nova = fila_cria();       //fila que sera retornada como a fila intercalada
  int i;

  while(!fila_vazia(f1)){
    i = fila_retira(f1);          //retira o primeiro da fila
    fila_insere(aux1, i);         //poe o valor retirado na aux1
  }
  while(!fila_vazia(f2)){         
    i = fila_retira(f2);          //retira o primeiro da fila
    fila_insere(aux2, i);         //poe o valor retirado na aux2
  }

  while(!fila_vazia(aux1) || !fila_vazia(aux2)){  //o laco so para quando esvaziar aux1 e aux2
    if(!fila_vazia(aux1)){
      i = fila_retira(aux1);
      fila_insere(nova, i);       //insere o valor a pilha nova
      fila_insere(f1, i);         //retorna o item para a fila base respectiva
    }
    if(!fila_vazia(aux2)){
      i = fila_retira(aux2);
      fila_insere(nova, i);      //insere o valor em cima do valor de f1 intercalando
      fila_insere(f2, i);       //retorna o item para a fila base respectiva
    }
    printf("%d, %d\n", fila_vazia(aux1), fila_vazia(aux2));
  }
  return nova;
}

int main() {
  Fila *f1 = fila_cria();
  Fila *f2 = fila_cria();
  fila_insere(f1, 1);
  fila_insere(f1, 2);       //Inserções
  fila_insere(f1, 3);
  fila_insere(f1, 4);
  

  fila_insere(f2, 10);
  fila_insere(f2, 20);      //Inserções
  fila_insere(f2, 30);
  fila_insere(f2, 40);
  
  printf("Fila f1: ");
  fila_mostra(f1);
  printf("Fila f2: ");
  fila_mostra(f2);
  printf("Fila intercalada: ");
  fila_mostra(fila_intercala(f1, f2));
}
