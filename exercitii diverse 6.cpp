//6. Se dă un vector cu n elemente numere naturale. 
//Să se verifice dacă are elementele ordonate strict crescător.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int n, int v[101])
{
	int i, ok = 0;
	printf("n=");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &v[i]);
	}

	/*
	* 
	* int ok = 1;
	* for(i=1;i<n;i++)
	* {
	* if(v[i]>v[i+1])
	* ok=0;
	* 
	* if(ok == 0)
	* break;
	* }
	* 
	* if(ok == 0)
	* printf("nasol");
	* else
	* pritnf("bun");
	*/

	for (i = 1; i < n; i++)
	{
		if (v[i] < v[i + 1])
			ok++;
	}
	if (ok == n - 1)
		printf("vector ordonat");

	else
		printf("vector neordonat");
}