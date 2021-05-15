//6. Sa se stearga din vector toate elementele care cotin o cifra x data de la tastatura.

#include <stdio.h>
#pragma warning (disable:4996)
int contineCifra(int n, int x)
{
	while (n)
	{
		if (n % 10 == x)
			return 1;
		else
			n = n / 10;
	}
	return 0;
}
void stergereElement(int& n, int v[100], int x)
{
	int i, j, nr = 0;

	for (i = 1; i <= n; i++)
		if (contineCifra(v[i], x) == 1)
		{
			for (j = i; j < n; j++)
				v[j] = v[j + 1];
			n--;
			i--;
		}
}

int main()
{
	int n, i, v[100], x;
	scanf("%d", &n);
	scanf("%d", &x);

	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);


	//Afisare inainte de stergere
	printf("\nAfisare inainte de stergere:\n");

	for (i = 1; i <= n; i++)
		printf("%d ", v[i]);

	stergereElement(n, v, x);

	//Afisare dupa stergere
	printf("\nAfisare dupa de stergere:\n");

	for (i = 1; i <= n; i++)
		printf("%d ", v[i]);

}