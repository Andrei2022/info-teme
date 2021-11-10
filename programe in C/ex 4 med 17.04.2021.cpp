// Ex 4. Se dă un şir cu n elemente, numere naturale. Să se verifice dacă în şir există elemente impare.
#include <stdio.h>
#pragma warning (disable:4996)

int main()
	{
    int n, v[101], ok = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 1) 
        {
            ok = 1;
        }
    }
    if (ok==1)
        printf( "DA");
    else
        printf("NU");
	}

