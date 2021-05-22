//1. Să se șteargă dintr-un vector toate elementele pare.

#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <malloc.h>

void stergePar(int &n, int v[101]) 
{
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    scanf("%d", &v[i]);
    for (i = 1; i <= n; ++i)
        if (v[i] % 2 == 0) 
        {
            for (j = i + 1; j <= n; ++j)
                v[j - 1] = v[j];
            n--;
            i--;
        } 
}

int main()
{
    int n, v[101], i;
    stergePar(n, v);
    for (i = 1; i <= n; ++i)
    printf("%d", v[i]);
}
