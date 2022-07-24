#include <stdio.h>

int comparation(int *i, int n)
{
    for (; n > 0 && i[n] < i[n - 1]; n--)
    {
        if (i[n] < i[n - 1])
        {
            int temp = i[n];
            i[n] = i[n - 1];
            i[n - 1] = temp;
        }
    }
}

int insertion(int *i, int n)
{
    for (int j = 1; j < n; ++j)
    {
        comparation(i, j);
    }
}

void print_arr(int *i, int n)
{
    for (int j = 0; j < n; ++j)
    {
        printf("%d", i[j]);

        if (j == n - 1)
        {
            return;
        }

        printf(", ");
    }
}

int main()
{
    int a[] = {2, 5, 6, 9, 1, 3, 7, 4, 8, 10};
    insertion(a, 10);
    print_arr(a, 10);
}