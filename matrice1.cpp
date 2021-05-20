//Se dă o matrice cu n linii şi m coloane şi elemente numere naturale.Determinați suma valorilor pare din matrice.

#include<stdio.h>
#pragma warning(disable:4996)

void matrice(int &s)
{
	int v[100][100], n, m, j ,i;
	s = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &v[i][j]);

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (v[i][j] % 2 == 0) s = s +v[i][j];
}

int main()
{
	int s;
	matrice(s);
	printf("%d", s);

}