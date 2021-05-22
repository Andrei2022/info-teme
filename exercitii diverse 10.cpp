//10. Se dau n numere numere naturale cu cel mult două cifre fiecare. 
//Să se determine acele numere care apar o singură dată.

#include <stdio.h>
#pragma warning(disable:4996)
int v[101];
void rezolv()
{
    int i, n, x;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
       scanf("%d", &x);
        v[x]++;
    }
    for (i = 0; i <= 99; i++)
        if (v[i] == 1)
            printf("%d", i);

}