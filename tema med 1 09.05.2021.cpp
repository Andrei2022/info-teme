//1. Să se șteargă dintr - un vector toate elementele care sunt numere prime.
#include <stdio.h>
#pragma warning(disable:4996)

int prim(int n)
{
	int i;
	if (n < 2)
		return 0;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0) return 0;
	return 1;
}

int main()
{
	int v[100], n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);
	for (i = 1; i <= n; i++)
	{
		if (prim(v[i]))
		{
			for (j = i; j < n; j++)
				v[j] = v[j + 1];
			i--;
			n--;
		}

	}
	for (i = 1; i <= n; i++)
		printf("%d ", v[i]);
	return 0;
}