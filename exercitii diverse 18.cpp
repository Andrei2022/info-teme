//18. Să se parcurgă în sensul acelor de ceasornic chenarul exterior al unei matrice pătratice.

#include <stdio.h>
#pragma warning(disable:4996)
#include <math.h>

void matrice(int &n, int v[101][101])
{
	int i, j, k;
		scanf("%d", &n);
		n = sqrt(n);
		for (k = 1; k <= (n + 1) / 2; k++)
		{
			for (i = k; i <= n + 1 - k; i++) 
				scanf("%d", &v[i][k]);
			for (j = k + 1; j <= n + 1 - k; j++) 
				scanf("%d" ,&v[n + 1 - k][j]);
			for (i = n - k; i >= k; i--) 
				scanf("%d", &v[i][n + 1 - k]);
			for (j = n - k; j > k; j--) 
				scanf ("%d", &v[k][j]);
		}
		
}






int main()
{
	int n, v[101][101], i, j;
	matrice(n, v);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}



}