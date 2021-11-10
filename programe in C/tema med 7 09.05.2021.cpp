//7. Sa se stearga din vector toate elementele care sunt egale cu oglinditul lor.

#include <stdio.h>
#pragma warning (disable:4996)

void oglindit(int& x, int& inv)
{
	inv = 0;

	while (x)
	{
		inv = inv * 10 + x % 10;
		x /= 10;
	}
}

int sterg(int& n, int v[101])
{
	int inv, copie, j;

	for (int i = 1; i <= n; ++i)
	{
		copie = v[i];
		oglindit(copie, inv);
		if (v[i] == inv)
		{
			for (j = i; j < n; j++)
				v[j] = v[j + 1];
			n--;
			i--;
		}
	}


	return 0;
}

int main()
{
	int n, v[101];
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &v[i]);
	sterg(n, v);
	for (int i = 1; i <= n; ++i)
		printf("%d ", v[i]);
}