//Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. 
//Calculaţi diferenţa în valoare absolută dintre sumele elementelor de pe cele două diagonale.

#include<stdio.h>;
#include<math.h>;
#pragma warning (disable:4996)

void matrice(int& s1, int& s2, int &dif)
{
    int v[100][100], i, j, n;
    s1 = 0;
    s2 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &v[i][j]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) {
            if (i == j)
                s1 = s1 + v[i][j];
            if (i + j == n - 1)
                s2 = s2 + v[i][j];
        }

        //s1 = s1 + v[i][i];
        //s2 = s2 + v[i][n - i + 1];
    }

        dif = abs(s1 - s2);
}

int main()
{
    int s1, s2, dif;
    matrice(s1, s2, dif);
        printf("%d", dif);

}