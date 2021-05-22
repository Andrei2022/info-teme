//15. Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. 
//Să se determine câte linii ale matricei au toate elementele egale.

#include <stdio.h>
#pragma warning(disable:4996)

void matrice(int v[100][100], int& c, int& ok)
{
    int n, m, i, j;
    c = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &v[i][j]);
    for (i = 0; i < n; i++)
    {
        ok = 0;
        for (j = 0; j < m; j++)
            if (v[i][j] != v[i][0])
                ok = 1;

    }
}

int main()
{
    int v[100][100], c, ok;
    matrice(v, c, ok);
    if (ok == 0)
    {
        c++;
    }
    printf("%d", c);
}
