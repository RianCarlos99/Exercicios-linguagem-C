#include <stdio.h>

struct task
{
  int start, finish;
};

void print_indice(int n)
{
  printf("v[%d]\n", n);
}

int same_time(struct task *v, int n, int h)
{
  int acc = 0;

  for (int i = 0; i < n; i++)
  {
    if (v[i].start == h)
    {
      print_indice(i);
      acc++;
    }
  }
  return acc;
}

int main()
{
  int n;
  int h;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  struct task v[n];
  for (int i = 0; i < n; i++)
  {
    printf("Digite o horario inicial e final, consecutivamente: ");
    scanf("%d%d", &v[i].start, &v[i].finish);
  }
  printf("Digite o horario a ser analisado: ");
  scanf("%d", &h);
  int quant = same_time(v, n, h);
  printf("%d horario/os conflitante/es", quant);
}