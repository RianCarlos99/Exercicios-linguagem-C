#include <stdio.h>
#include <stdlib.h>
#include "arvorePreco.h"

void mostraMenor(Arv *T, float valor){
	if(T!=NULL){
 		if(T->preco<valor)
 		   printf(" Codigo: %d - Preco: %d\n", T->codigo, T->preco);
         	
		mostraMenor(T->left, valor);
		mostraMenor(T->right, valor);
    }
}

int main(){
    Arv *T=abb_cria();
	
	T=abb_insere(T,5,3);
	T=abb_insere(T,6,7);
	T=abb_insere(T,4,2);
	T=abb_insere(T,9,9);
	T=abb_insere(T,10,9);
	
	mostraMenor(T,10);
}