#include <stdio.h>
#include <stdlib.h>


int trocaCarac(char *s, char m, char p) {
	int acc = 0;
	for(int n=0; s[n]!='\0'; n++){
		if(s[n]==m){
			s[n]=p;
			acc++;
		}
	}
	return acc;
}

int main() {
	char phrase[]= "araraquara";
	int x = trocaCarac(phrase, 'a', '*');
	printf("numero de vezes que ouve a troca: %d\nphrase: %s", x, phrase);
}

