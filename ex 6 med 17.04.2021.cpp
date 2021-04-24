// Ex 6. Se dă un şir cu n elemente, numere naturale. 
// Să se verifice dacă toate elementele şirului sunt multipli ai ultimului element din şir.

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int n, m, v[101], pp;
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i)
             scanf("%d", &v[i]);
        int pp = 1;
        for (int i = 1; i < n; ++i) 
        {
            if (v[i] % v[n] != 0)
                pp = 0;
        }
        if (pp)
            printf("DA");
        else
            printf("NU");
        return 0;
    }
}