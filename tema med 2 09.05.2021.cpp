//2. Se citește un șir cu n elemente, numere întregi. 
//Să se șteargă elementele care se repetă, păstrându-se doar primul de la stânga la dreapta.
#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int v[1001], n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
			if (v[i] == v[j])
			{
				for (int k = j + 1; k <= n; k++)
					v[k - 1] = v[k];
				n--, j--;
			}

	for (int i = 1; i <= n; i++)
		printf("%d ", v[i]);

	return 0;

}