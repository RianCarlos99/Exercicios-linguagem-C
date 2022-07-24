#include <stdio.h>
#include <stdbool.h>

bool checar_alternante(int *v, int n)
{
  int acc = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0 && acc > v[i])
    {
      return false;
    }
    if (i % 2 == 1 && acc < v[i])
    {
      return false;
    }
    acc = acc + v[i];
  }
  return true;
}

int main()
{
  int vetor[] = {4, 2, 8, 15, 30};
  int resposta = checar_alternante(vetor, 5);
  printf("%d", resposta);
}