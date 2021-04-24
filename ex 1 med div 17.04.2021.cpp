// Ex 1. Se citește un număr natural n. Să se determine suma divizorilor săi.

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int n, d, s = 0;


	scanf("%d", &n);
	for (d = 1; d * d < n; d++)
		if (n % d == 0)
			s = s + d + n / d;

	printf("%d", s);

	return 0;

}
