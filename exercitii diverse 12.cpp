//12. Se dă un vector cu n elemente, numere naturale nenule. 
//Afișați termenii în ordine crescătoare. 
//Termenii care apar de mai multe ori se vor afișa o singură dată.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int& n, int& x, int& i, int v[1000])
{
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		v[x] = 1;
	}
}

int main()
{
	int n, x, i, v[1000];
	rezolv(n, x, i, v);
	for (i = 1; i < 1000; ++i)
		if (v[i] != 0)
			printf("%d ", v[i]);
}
