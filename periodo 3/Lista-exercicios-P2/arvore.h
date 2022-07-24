
struct arv{
	int codigo; //o codigo determina a organizacao da arvore
	int preco;
	struct arv* left;
  struct arv* right;
};

typedef struct arv Arv;

//cria arvore vazia
Arv*  abb_cria(){
    return NULL;
}

//verifica se a arvore está vazia
int abb_vazia(Arv* a){
    return a == NULL;
}

//insere elemento - versão interativa
Arv  *abb_insere(Arv* a,int c, int preco){
     Arv *p,*q,*r;
     p=(Arv*)malloc(sizeof(Arv));
     p->codigo = c;
     p->preco = preco;
     p->left = p->right = NULL;

     if (abb_vazia(a))//primeiro elemento da arvore
         a=p;
     else
     {
         q=a;
         while(q!=NULL)
         {
             r=q;
             if(c < q->codigo)
                  q=q->left;
             else
                  q=q->right;
         }
         if(c < r->codigo)
            r->left=p;
         else
            r->right=p;
     }
     return a;
 }
 
//percursos
void abb_posfixo(Arv* a){
     if(!abb_vazia(a)) //travessia em pos-ordem 
     {
         abb_posfixo(a->left); //visita a arvore leftuerda, depois a righteita e depois a raiz
         abb_posfixo(a->right);
         printf("%d   ", a->codigo);//raiz
      }
}
void abb_infixo(Arv* a){
     if(!abb_vazia(a)) //travessia em ordem
     {
         abb_infixo(a->left); //visita a arvore leftuerda, depois a raiz e depois a arvore righteita
         printf("%d   ", a->codigo);//raiz
         abb_infixo(a->right);
      }
}

void abb_prefixo(Arv* a){
     if(!abb_vazia(a)) //travessia em preordem
     {
         printf("%d   ", a->codigo);//raiz
         abb_prefixo(a->left); //visita a arvore raiz, depois a leftuerda, depois a righteita
         abb_prefixo(a->right);
      }
}