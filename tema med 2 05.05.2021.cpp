//Subprogramul mult, cu doi parametri, primeşte prin intermediul primului parametru, n, un
//număr natural nenul cu maximum trei cifre şi prin intermediul celui de - al doilea parametru,
//a, un tablou unidimensional având n componente numere naturale cu cel mult 8 cifre
//fiecare.Subprogramul returnează valoarea true dacă cele n componente ale lui a pot
//forma o mulţime şi returnează false în caz contrar.

#include <stdio.h>
#pragma warning (disable:4996)

bool mult(int n, int a[1000])
{
	//v2 -> compar fiecare termen cu fiecare (1->2),(1->3),...,(1->n),(2->3),(2->4)....(n-1 -> n))

	int i, j;

	for (i = 1; i <= n - 1; i++)
	{
		for (j = i + 1; j <= n; j++)
			if (a[i] == a[j])
				return false;
	}

	return true;

	/*
	 int aux, i, j;

	//v1 -> sortez vectorul si ma uit la 2 venici
	for (i = 1; i < n; i++)
		for (j = i + 1; j <= n; j++)
			if (a[i] > a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
	//------ pana aici am sortat

	//merg printre toti parametrii vectorului si verific din 2 in 2 vecini. De ex: 1-2,2-3,3-4,4-5

	for (i = 1; i < n; i++)
		if (a[i] == a[i + 1])
			return false;

	return true;
	*/



}

int main()
{
	int a[1000], n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	if (mult(n, a) == false)
		printf("Nu se poate forma o multime!");
	else
		printf("Se poate forma o multime!");

}