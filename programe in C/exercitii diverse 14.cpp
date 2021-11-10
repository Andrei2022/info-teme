//14. Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. 
//Să se determine elementul cu număr maxim de apariții în matrice. 
//Dacă există mai multe elemente cu număr maxim de apariții se va afișa cel mai mare dintre ele.

#include <stdio.h>
#pragma warning(disable:4996)

void matrice()
{
    int x[100][100], v[1000000];
    int n, m, nrmaxim = 0, solutii[100], z = 0, maximap = 0, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &x[i][j]);
            v[x[i][j]]++;
            if (x[i][j] > nrmaxim) 
                nrmaxim = x[i][j];
        }

    for (i = 1; i <= nrmaxim; i++)
        if (v[i] > maximap) 
            maximap = v[i];
    for (i = 1; i <= nrmaxim; i++)
    {
        if (v[i] == maximap)
        {
            z++;
            solutii[z] = i;
        }
    }
    for (int i = 1; i <= z; i++)
        printf("%d", solutii[i]);
}
