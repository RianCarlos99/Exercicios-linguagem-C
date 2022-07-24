#include <stdio.h>

struct task
{
  int start, finish;
};

int indice_min(struct task *v, int b, int n)
{
  int m = b;
  for (int i = b + 1; i < n; i++)
  {
    if (v[m].finish - v[m].start > v[i].finish - v[i].start)
    {
      m = i;
    }
  }
  return m;
}

void selector_sort(struct task *v, int n)
{
  for (int b = 0; b < n - 1; ++b)
  {
    int m = indice_min(v, b, n);
    struct task tmp = v[b];
    v[b] = v[m];
    v[m] = tmp;
  }
}

void print_array(struct task *v, int n)
{
  for (int i = 0; i < n; ++i)
  {
    printf("%dh -- %dh....periodo: %dh\n", v[i].start, v[i].finish, v[i].finish - v[i].start);
  }
}

int main()
{
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  struct task v[n];
  for (int i = 0; i < n; i++)
  {
    printf("Digite o horario inicial e final, consecutivamente: ");
    scanf("%d%d", &v[i].start, &v[i].finish);
  }
  selector_sort(v, n);
  print_array(v, n);
}