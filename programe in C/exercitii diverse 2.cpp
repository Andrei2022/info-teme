//2. Să se insereze pe o poziție dată într-un șir o valoare precizată.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int &n, int &val, int &p, int v[50])
{
    int i;
    scanf ("&d",&n);
    scanf("%d", &val);
    scanf("%d", &p);
    for (i = 1; i <= n; ++i)
        scanf("%d", &v[i]);
    n++;
    for (i = n; i > p; --i)
        v[i] = v[i - 1];
    v[p] = val;
}



int main()
{
    int n, v[50], val, p, i;
    rezolv(n, val, p, v);
    for (i = 1; i <= n; ++i)
    printf("%d", v[i]);
}