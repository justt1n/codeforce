#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bbsort(int a[1000], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (a[j] < a[j + 1])
                swap(&a[j], &a[j + 1]);
}

int main()
{
    int before[1000];
    int after[1000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &before[i], &after[i]);
    for (int i = 0; i < n; i++)
    {
        if (before[i] != after[i])
        {
            printf("rated");
            return 0;
        }
    }
    bbsort(after, n);
    for (int i = 0; i < n; i++)
    {
        if (before[i] != after[i])
        {
            printf("unrated");
            return 0;
        }
    }
    printf("maybe");
    return 0;
}