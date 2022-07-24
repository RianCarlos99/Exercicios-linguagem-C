#include <stdio.h>
#include <stdlib.h>
#define N 2

  typedef struct {
    char nome[30];
    int ra;
  }Aluno;

void mostraAluno(Aluno *p){
  for(int i=0; i< N; i++){
    printf("Nome do Aluno: %s\nRA: %d\n\n", p[i].nome, p[i].ra);
  }
}

int main(){
  int i=0;
  Aluno *R = (Aluno*)malloc(sizeof(Aluno)*N);
  
  do{
    printf("Escreva o nome do aluno: ");
    gets(R[i].nome);
    printf("Escreva o seu RA: ");
    scanf("%d", &R[i].ra);
    fflush(stdin);
    i++;
  }while(i<N);
  
  printf("\n\n");
  mostraAluno(R);
}

