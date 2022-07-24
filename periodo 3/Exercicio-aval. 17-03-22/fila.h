#define N 50
typedef struct {
        int n;//posicao final
        int ini;
        int vet[N];
        }Fila;

Fila *fila_cria(void){
      Fila *f=(Fila*)malloc(sizeof(Fila));
      f->n=0;
      f->ini=0;
      return f;
}      
        
void fila_insere(Fila *f, int v){
   if(f->n==N){ //fila cheia
      printf("Capacidade da fila esgotada.\n");
      return; //retorna ao programa 
      }
      //insere novo elemento
      f->vet[f->n]=v;
      f->n++; 
}              
int fila_vazia(Fila *f){
    if(f->n==f->ini)
      return 1;
    return 0;
}
float fila_retira(Fila *f){
     float v;
     
     //retira o lemento da fila
     v=f->vet[f->ini];
     f->ini++;
     return v;
}
void fila_libera(Fila *f){
     free(f);
}                           
void fila_mostra(Fila *f){
     int i;
     for(i=f->ini;i<f->n;i++)
          printf("%d  ",f->vet[i]);
     printf("\n");
}               

