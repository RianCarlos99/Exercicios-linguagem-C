#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int contaNota(Arv *T, float v1, float v2){
    int dentroIntervalo=0;
    
     if(T!=NULL){
     	if(T->preco>v1 && T->preco<v2)
         	dentroIntervalo+=1;
         	
        dentroIntervalo+=contaNota(T->left, v1,v2); 
        dentroIntervalo+=contaNota(T->right, v1,v2);
     }
      
     return dentroIntervalo;
}

int main(){
    Arv *T=abb_cria();
	
	T=abb_insere(T,10,3);
	T=abb_insere(T,5,7);
	T=abb_insere(T,6,2);
	T=abb_insere(T,9,1);
	T=abb_insere(T,9,0);
	T=abb_insere(T,9,8);
	T=abb_insere(T,9,5);
	T=abb_insere(T,9,15);
	T=abb_insere(T,9,9);
	
	printf("A quantidade de numeros que estao dentro deste intervalo e %d", contaNota(T, 1, 9));
}
