// Ex 5. Se dă un şir cu n elemente, numere naturale. 
// Să se verifice dacă toate elementele şirului sunt pare.
#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    {
        int i, v[100], n, ok = 1;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &v[i]);
            if (v[i] % 2 != 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok == 0)
            printf("nu");
        else
            printf("da");
    
    }
}