//Se citește un număr natural n. 
//Să se determine câți divizori pari are acest număr.

#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	int div, i, n, contor=0, suma = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (n % i == 0 && i % 2 == 0) 
		{
			contor++;
		}
	}
	printf("Exista %d dizivori pari", contor);

}
