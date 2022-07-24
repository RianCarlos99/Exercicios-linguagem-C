#include <stdio.h>
#include <stdlib.h>

typedef struct lista { 
  int matricula;
  float nota;
  struct lista *next;
} Lista;


void notasMenores(Lista *aluno, float nota){
  Lista *aux=aluno;
  
  while(aux!=NULL){
    if(aux->nota < nota){
      printf("\n%.2f\n", aux->matricula);
    }
    aux=aux->next;
  }
}
