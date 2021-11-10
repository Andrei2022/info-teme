//5. Sa se stearga din vector toate elementele care contin cifra 0.

#include <stdio.h>
#pragma warning(disable:4996)
int contineZero(int n)
{
	while (n)
	{
		if (n % 10 == 0)
			return 1;
		else
			n = n / 10;
	}
	return 0;
}
int main()
{
	int n, v[101];
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &v[i]);
	for (int i = 1; i <= n; ++i)
		if (contineZero(v[i]) == 1)
		{
			for (int j = i + 1; j <= n; ++j)
				v[j - 1] = v[j];
			n--;
			i--;
		}

	for (int i = 1; i <= n; ++i)
		printf("%d ", v[i]);
	return 0;
}

