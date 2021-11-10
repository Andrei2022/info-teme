//Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
//parametrului întreg n un număr natural de cel mult 9 cifre şi returnează valoarea absolută a diferenţei dintre numărul de cifre pare şi numărul de cifre impare conţinute de n.
//Exemplu: dacă n = 92465, în urma apelului se va returna valoarea 1 (2 cifre impare, 3 cifre pare)

#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int calcul(int n)
{
	int par = 0, impar = 0;
	int rezultat;
	while (n)
	{
		if (n % 2 == 0) par++;
		else impar++;

		n /= 10;
	}

	rezultat = abs(par - impar);

	return rezultat;
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", calcul(n));
}
