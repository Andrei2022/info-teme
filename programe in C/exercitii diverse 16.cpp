//

#include <stdio.h>
#pragma warning(disable:4996)

int a[101][101];

void matrice(int v[100][100], int &c, int &ok)

{
    int n, m, i, j, egale;
    c = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    for (i = 1; i <= n; ++i)

        for (j = 1; j <= m; ++j)

            scanf("%d", &a[i][j]);

    if (n == 1) 
        c = 0;

    else
    {
        for (i = 2; i <= n; ++i)

        {

            egale = 1;

            for (j = 1; j <= m && egale; ++j)

                if (a[i][j] != a[i - 1][j]) egale = 0;

            if (egale) ++c;

        }
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
