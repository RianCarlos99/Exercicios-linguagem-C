#include <stdio.h>

int segmento_array(int n, int s)
{
  int array[s];
  int i = 0;
  while (i < s)
  {
    array[i] = n;
  }
}

int confere_vetor(int *v, int n, int s)
{
  int *p = v;
  int *h = p + 1;
  int acc = *p;
  for (int i = 0; i < n; i++)
  {
    for (; acc < s; h++)
    {
      acc = acc + *h;
      printf("%d - ", acc);
    }
    printf("%d\n", acc);
  }
}

int main()
{
  int vetor[] = {3, 4, 5, 6, 7, 8};
  confere_vetor(vetor, 6, 12);
}