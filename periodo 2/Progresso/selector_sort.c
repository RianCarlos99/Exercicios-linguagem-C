#include <stdio.h>

// b < v && v[b:e) é válido
int ind_min(int *v, int b, int n)
{
    int m = b;
    for (int i = b + 1; i < n; i++)
    {
        if (v[m] > v[i])
        {
            m = i;
        }
    }
    return m;
}

//n >= 0 && v[0:n) é válido
void sel_sort(int *v, int n)
{
    for (int b = 0; b < n - 1; ++b)
    {
        int m = ind_min(v, b, n);
        int tmp = v[b];
        v[b] = v[m];
        v[m] = tmp;
    }
}

void print_arr(int *v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d", v[i]);

        if (i == n - 1)
        {
            return;
        }

        printf(", ");
    }
}

int main()
{
    int a[] = {2, 5, 6, 9, 1, 3, 7, 4, 8, 10};
    sel_sort(a, 10);
    print_arr(a, 10);
}