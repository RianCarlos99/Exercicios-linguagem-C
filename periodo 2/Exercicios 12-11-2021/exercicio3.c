#include <stdio.h>

int maior_indice(int *v, int s, int n)
{
  int acc = 0;
  for (int i = 0; i < n; i++)
  {
    acc = acc + v[i];
    if (acc > s)
    {
      return (i - 1);
    }
    if (acc == s)
    {
      return i;
    }
  }
  return n;
}

int main()
{
  int vetor[] = {1, 3, 1, 2, 5, 10};
  int resposta = maior_indice(vetor, 8, 6);
  int indice = vetor[resposta];
  printf("indice %d: ultimo valor somado = %d", resposta, indice);
}