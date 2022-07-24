#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verif_string(char *p)
{
  char s[] = "123456789ABCDEF";
  int acc;
  for (int i = 0; i < strlen(p); i++)
  {
    acc = 0;
    for (int t = 0; t < strlen(s); t++)
    {
      if (p[i] != s[t])
      {
        acc++;
      }
      if (acc == strlen(s))
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{
  char r[] = "412AAA213455";
  printf("%d", verif_string(r));
}
