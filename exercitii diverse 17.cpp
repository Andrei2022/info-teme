//17. Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. 
//Să se determine suma elementelor de pe cele două diagonale vecine cu diagonala principală.

#include <stdio.h>
#pragma warning(disable:4996)


void matrice(int &S)
{
    int n, v[101][101], i, j;
    S = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &v[i][j]);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            if (i - j == 1)
                S = S + v[i][j];
            if (j - i == 1)
                S = S + v[i][j];
        }
        printf("%d", S); 
        printf("\n");
}


int main()
{
    int S;
    matrice(S);
    printf("%d", S);
    printf("\n");
}