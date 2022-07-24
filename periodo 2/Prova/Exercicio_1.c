#include <stdio.h>

int num_maior(int*v, int n, int x){

    for(int r = 0; r < n; r++)
    {   
        if (v[r] > x)
        {
         printf("%d\n", v[r]);
        }
    } 
}

int main(){
    int array[] = {7, 4, 6, 5, 10, 3};
    num_maior(array, 6, 4);    
}