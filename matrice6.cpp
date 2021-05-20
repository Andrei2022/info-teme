#include <stdio.h>
#pragma warning (disable:4996)

void matrice(int v[100][100], int &n, int &m)
{
	int i, j, x=1;
	scanf("%d", &n);
	scanf("%d", &m);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++) 
		{

			v[i][j] = x;
			x++;

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

