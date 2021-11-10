//3. Să se insereze într-un șir după fiecare element par dublul său.

#include <stdio.h>
#pragma warning (disable:4996)

	int main()
{
	int v[100], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for (int i = 0; i < n; i++)
		if (v[i] % 2 == 0)
		{
			n++;
			for (int j = n-1; j > i; j--)
				v[j] = v[j - 1];
			v[i + 1] = v[i] * 2;
			i++;
		}
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
	return 0;
}