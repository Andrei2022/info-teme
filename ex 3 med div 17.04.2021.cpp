// Ex 3. Să se scrie un program care afișează divizorii comuni ai două numere naturale citite de la tastatură.

#include <stdio.h>
#pragma warning (disable:4996)

void rezolvare()
{
	unsigned long long a, b, r, d;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a == 0) d = b;
	else
		if (b == 0) d = a;
		else
		{
			while (b != 0)
			{
				r = a % b;
				a = b;
				b = r;
			}
			d = a;
		}
	for (int i = 1; i <= d; i++)
	{
		if (d % i == 0)
			printf("%d", i);
	}
}

void divComuni()
{
	int a, b, d, i, min;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a < b)
		min = a;
	else
		min = b;

	for (i = 1; i <= min; i++)
		if (a % i == 0 && b % i == 0)
			printf("%d ", i);
	
}
int main()
{
	//rezolvare();
	divComuni();
	return 0;
}