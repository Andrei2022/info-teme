// Ex 6. Să se scrie un program care să determine cel mai mic multiplu comun a două numere naturale citite de la tastatură.

#include <stdio.h>
#pragma warning(disable:4996)
void CMMMC(int a, int b)
{
	int copiea, copieb;
	copiea = a;
	copieb = b;

	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	printf("%d", copiea * copieb / a);
}

int main()
{
	int a, b, n;
	scanf("%d", &a);
	scanf("%d", &b);
	n = a;
	while (a % b != 0)
	{
		a = a + n;
	}

	//printf("%d", a);
	CMMMC(a, b);
}