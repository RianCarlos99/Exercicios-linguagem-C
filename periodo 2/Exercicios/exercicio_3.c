#include <stdio.h>

int main(){
    printf("Entre com o tamanho da sequencia: ");
    int x;
    scanf("%d", &x);
    
    int num_zero=0;
    int num_maior=0;
    int num_menor=0;
    for (int i=0; i < x; ++i){
        printf("Escreva o proximo numero: ");
        int k;
        scanf("%d", &k);
        if(k == 0){
            ++num_zero;
        }
        if(k < 0){
            ++num_menor;
        }
        if(k > 0){
            ++num_maior;
        }
    }
    printf("Quantidade de numeros igual a 0: %d", num_zero);
    printf("\nQuantidade de numeros menores que 0: %d", num_menor);
    printf("\nQuantidade de numeros maiores que 0: %d", num_maior);

}