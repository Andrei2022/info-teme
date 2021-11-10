//Să se scrie în limbajul C / C++ definiţia completă a subprogramului calcul, care primeşte
//prin parametrul n un număr natural nenul de cel mult 9 cifre şi furnizează prin parametrul x
//numărul obţinut prin alăturarea cifrelor pare ale lui n considerate de la dreapta către
//stânga.Dacă n nu conţine nicio cifră pară, x primeşte valoarea 0.
//Exemplu: în urma apelului calcul(9278, x), x primeşte valoarea 82.

#include <stdio.h>
#pragma warning(disable:4996)

void calcul(int& n)
{
	int nr = 0;
	while (n)
	{
		if (n % 10 % 2 == 0)
			nr = nr * 10 + n % 10;
		n = n / 10;
	}
	n = nr;
}
int main()
{
	int n;
	scanf("%d", &n);
	calcul(n);
	printf("%d ", n);

	return 0;
}
