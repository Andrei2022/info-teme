//Se da o matrice cu nxn elemente. elementele de pe diagonala principala sa fie egale cu 1, 
//sub diagonala principala sa fie egale cu 3 si deasupra diagonalei principale sa fie egale cu 2.

#include <stdio.h>;
#pragma warning (disable:4996);

void matrice(int v[100][100], int& n, int& m)
{
	int i, j;
	scanf("%d", &n);
	scanf("%d", &m);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i == j)
				v[i][j] = 1;

			if (i < j)
				v[i][j] = 2;

			if (i > j)
				v[i][j] = 3;
		}
	}
}

int main()
{
	int v[100][100], n, m, i, j;
	matrice(v, n, m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}
}