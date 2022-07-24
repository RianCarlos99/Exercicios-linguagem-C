#include <stdio.h>


int main(){
    printf("Entre com o tamanho da sequencia: ");
    int x;
    scanf("%d", &x);
    int acc=0;

    for (int a = 0; a < x; a++){
        printf("Entre com o proximo numero: ");
        int h;
        scanf("%d", &h);
        
        if (h < 0){
            h = -h;
        } 
        
        acc = acc + h;
    }

    printf("A soma absoluta dos numeros teste apresentados e: %d", acc);

}