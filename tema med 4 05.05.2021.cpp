//Se dă un tablou cu n elemente, numere naturale.
//Să se afișeze numerele prime din șir, în ordinea în care apar în șir.
//Se va defini și apela subprogramul prim, care verifică dacă un număr natural este prim.

#include <stdio.h>
#pragma warning (disable:4996)

int prim(int n)
{
	int nrDiv = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			nrDiv++;
	}
	if (nrDiv == 2)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[1001];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);

		if (prim(a[i]))
			printf("%d", a[i]);
		return 0;
	}
}