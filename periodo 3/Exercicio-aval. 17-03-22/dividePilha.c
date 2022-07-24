#include <stdio.h> 
#include <stdlib.h>
#include "Pilha.h"

Pilha* dividePilha(Pilha *p){
  Pilha *aux = cria_pilha();      //Pilha aux para tirar os valores da pilha base
  Pilha *nova = cria_pilha();     //Pilha que receberá as metades
  float v;                        //Variável para auxiliar a transição
  while(!pilha_vazia(p)){
    v = pilha_pop(p);     //recebe o valor retirado
    pilha_push(aux, v);   //coloca o valor retirado na aux
  };
  
  while(!pilha_vazia(aux)){
    v = pilha_pop(aux);       //retira o valor da aux 
    pilha_push(nova, v/2);    //coloca a metade do valor retirado da pilha aux na nova pilha
    pilha_push(p, v);         //retorna o valor retirado da aux para a pilha base
  }
  return nova;
}

int main(){
Pilha *pi = cria_pilha(); //Criação da pilha que será dividida
  pilha_push(pi, 10);
  pilha_push(pi, 20);     //Inserções de valores 
  pilha_push(pi, 30);
  pilha_push(pi, 40);
  printf("Pilha base: ");
  pilha_mostra(pi);       
  printf("\nPilha nova: ");
  pilha_mostra(dividePilha(pi));
}


