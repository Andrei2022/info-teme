//Se consideră subprogramul inv, care primeşte prin intermediul primului parametru a un
//număr natural, cu minimum două cifre şi maximum 8 cifre, şi furnizează prin intermediul
//celui de - al doilea parametru, b, valoarea numărului natural format cu aceleaşi cifre ca şi a, considerate în ordine inversă.
//De exemplu, pentru a = 3805, după apel b va avea valoarea 5083, iar dacă a = 3800, după apel b va avea valoarea 83.

#include <stdio.h>
#pragma warning (disable:4996)

void inv(int n, int& b)
{
	int c;
	int a = 0;
	while (n != 0)
	{
		c = n % 10;
		a = a * 10 + c;
		n = n / 10;
	}
	b = a;
}

int main()
{
	int n;
	int b;
	scanf("%d", &n);
	inv(n, b);
	printf("%d", b);
}
