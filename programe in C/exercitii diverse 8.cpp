//8. Se dă un şir cu n elemente, numere naturale. 
//Să se verifice dacă toate elementele şirului au număr par de cifre.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int v[100], int &n, int &c)
{
    int i, s;
        c = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (i = 0; i < n; i++)
    {
        s = 0;
        while (v[i])
        {
            s++;
            v[i] = v[i] / 10;
        }
        if (s % 2 != 0)
            c = 0;
    }
}

int main()
{
    int v[100], n, c;
    rezolv(v, n, c);
    if (c == 0)
        printf("Nu am numar par");

    else
        printf("Da, au numar par");



}