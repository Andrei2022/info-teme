//3.Subprogramul sfx primeşte prin singurul său parametru, x, un număr natural din intervalul [100,2000000000] 
//şi returnează valoarea 1 dacă ultimele trei cifre ale numărului sunt în ordine strict descrescătoare 
//sau valoarea 0 în caz contrar.
//Exemplu: dacă x = 24973 se va returna valoarea 1.

#include <stdio.h>
#pragma warning(disable:4996)

int sfx(int x)
{
	int a, b, c, k;
	k = 0;
	a = x % 1000 / 100; b = x % 100 / 10;
	c = x % 10;
	if (a > b && b > c) k = 1;
	return k;
}
int main()
{
	int n;
	scanf("%d", &n); 
	
	if (sfx(n) == 1)
		printf("da"); 
	else 
		printf("nu");
}