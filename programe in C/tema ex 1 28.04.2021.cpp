//Se consideră subprogramele :
//– prim, care primeşte prin intermediul unicului său parametrului x un număr natural nenul
//de cel mult 4 cifre şi returnează valoarea 1 dacă x este un număr prim şi 0 în caz contrar;
//– numar, care primeşte prin intermediul parametrului x un număr natural nenul de cel mult
//4 cifre şi furnizează prin intermediul parametrului nrp numărul de numere prime mai mici
//decât x.
#include <stdio.h>
#pragma warning(disable:4996)

int pr(unsigned int a)
{
	int i;
	for (i = 2; i <= a; i++)
	{
		if (a % i == 0)
			break;
	}
	
	if (i == a)
		return 1;

	else
		return 0;
	
}

int main()
{

	//asta trebuie refacuta, o sa o pun eu pe git ca schelet si o sa o continui tu
	unsigned int n, i, nrCifre = 0, aux;
	do
	{
		scanf("%d", &n);
	}while ((n <= 99) || (n > 9999999999));
	aux = n;
	do
	{
		aux = aux / 10;
		nrCifre++;
	} while (aux / 10 != 0);

		nrCifre++;

		for (i = 1; i <= nrCifre; i++) {
			if (pr(n) == 1)
			{
				printf("%d", &n);
			}
			n = n / 10;
		}
}
