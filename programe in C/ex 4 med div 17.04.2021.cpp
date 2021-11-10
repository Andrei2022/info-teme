// Ex 4. Se citește un număr natural n. Să se determine numărul de divizori ai oglinditului lui n.

#include <stdio.h>
#pragma warning (disable:496)

int main()
{
    long long ogl = 0, n, d, cif, r = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        cif = n % 10;
        n = n / 10;
        ogl = ogl * 10 + cif;
    }
    for (d = 1; d <= ogl; d++)
    {
        if (ogl % d == n)
            r++;
    }
    printf("%d", r);
    return 0;
}
