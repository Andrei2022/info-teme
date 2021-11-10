// Ex 2. Se citește un număr natural n. Să se determine câți divizori pari are acest număr.

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int n, nr=0, d;
    
        scanf("%d", &n);
        for (d = 1; d * d <= n; d++)
        {
            if (n % d == 0)
            {
                if (d % 2 == 0) nr++;
                if ((n / d) % 2 == 0) nr++;
            }
        }

        printf("%d", nr);
        return 0;
    

}