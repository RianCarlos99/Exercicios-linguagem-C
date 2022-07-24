#include <stdio.h>
#include <stdbool.h>

bool checar_alto(int *v, int n)
{
  int acc = 0;
  for (int i = 0; i < n; i++)
  {
    if (i > 0 && acc > v[i])
    {
      return false;
    }
    acc = acc + v[i];
  }
  return true;
}

int main()
{
  int vetor[] = {2, 4, 7, 15, 30};
  int resposta = checar_alto(vetor, 5);
  printf("%i", resposta);
}