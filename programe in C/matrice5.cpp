#include <stdio.h>
#pragma warning (disable:4996)

void matrice(int v[100][100], int& n, int& x)
{
	int i, j;

	scanf("%d", &n);
	scanf("%d", &x);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			v[i][j] = x / 10 % 10;

			if (i + j == n - 1)
			{
				v[i][j] = x % 10;
			}


			if (i == j)
			{
				v[i][j] = x / 100 % 10;
			}


		}
	}
}

int main()
{
	int v[100][100], i, j, n, m, x;
	matrice(v, n, x);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}
}