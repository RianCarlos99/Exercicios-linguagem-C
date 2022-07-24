#include <stdio.h>


int prod_num (int* v, int n){
    int mult = 1;
    for (int i = 0; i < n; i++){
        
        if(v[i] > 0)
        {
            mult *= v[i];
        }
    }
    return mult;
}

int main(){
    int array[] = {3,4,-2,-4,10};
    printf("Produto: %d", prod_num(array, 5));
}