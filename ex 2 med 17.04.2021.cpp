// Ex 2. Se dă un vector cu n numere naturale. 
// Să se determine câte dintre elemente au valoarea strict mai mare decât media aritmetică a elementelor vectorului.
#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, n, nr, v[100], contor = 0;
	float sum = 0;
	scanf("%d", &n);
	//scanf("%d", &x);
	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);
	for (i = 1; i <= n; i++) 
	{
		sum = sum + v[i];

	}

	sum = (float)sum / n;

	for (i = 1; i <= n; i++)
		if (v[i] > sum)
			contor++;

	printf("%d", contor);


}
