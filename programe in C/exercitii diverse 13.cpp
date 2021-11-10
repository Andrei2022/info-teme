//13. Se dau n numere naturale. Aflaţi câte dintre aceste numere sunt prime.

#include <stdio.h>
#pragma warning(disable:4996)

void prim()
{

	int n, i, x, rez, d, prim;

	scanf("%d", &n);
	rez = 0;

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		prim = 1;
		if (x < 2)
			prim = 0;
		if (x % 2 == 0 && x > 2)
			prim = 0;
		for (d = 3; d * d <= x && prim == 1; d++)
			if (x % d == 0)
				prim = 0;
		rez++;
	}
	printf("%d", &rez);
}

int main()
{
	prim();
}
