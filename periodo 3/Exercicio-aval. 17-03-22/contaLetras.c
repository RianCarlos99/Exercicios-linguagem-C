#include <stdio.h>
#include <stdlib.h>

void contaLetras(char *p) {
  char aux;
  int cont;
  for (int n=0; p[n] != '\0'; n++) { //laço for pra percorrer uma letra por vez
    
    if(p[n] != '*'){ //Pula o caractere que ja foi contado
      aux = p[n];
      cont=0;
      
      for(int i=n; p[i]!='\0'; i++){ //laço for pra verificar cada item da string se é igual a variavel aux
        if(p[i]==aux){
          p[i]='*';
          cont++; //contador de ocorrencias e substituição do caractere por '*'
        } 
      }
      printf("letra %c = %d\n",aux, cont);
    }
  }
}

int main() {
  char phrase[50];  //string para teste
  printf("Digite uma palavra: ");
	gets(phrase);
  contaLetras(phrase);
}