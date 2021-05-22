//9. Se dă o listă cu numere naturale. 
//Să se determine numerele naturale nenule cu cel mult patru cifre care nu apar în lista dată.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv()
{
    int x, i, v[10000];
    while (f >> x)
        if (x <= 9999) v[x] = 1;
    for (i = 9999; i >= 1; i--)
        if (v[i] == 0) 
}