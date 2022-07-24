#include <stdio.h>
#include <stdlib.h>
#define N 50

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
    printf("%.1f\n", p->vet[i]);
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

void menu() {
  system("cls");
  printf("Escolha uma das opcoes a seguir: \n\n");
  printf("1 - Mostra a pilha\n");
  printf("2 - Acrescentar um numero ao topo da pilha\n");
  printf("3 - Retirar o numero do topo da pilha\n");
  printf("9 - Fim do programa\n");
}

int main(){
  Pilha *pi=cria_pilha();
  int opMenu;
  float item;
  do{
    menu();
    scanf("%d", &opMenu);
    
    switch(opMenu){
      case 1: 
        pilha_mostra(pi);
      break;
      
      case 2:
        printf("Digite o valor a ser empilhado: ");
        scanf("%f", &item);
        pilha_push(pi, item);
      break;

      case 3:
        printf("Valor retirado da pilha: %.1f\n", pilha_pop(pi));
      break;  
    }
    system("pause");
  }while(opMenu!=9);
}