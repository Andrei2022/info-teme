//11. Se dau mai multe numere naturale, fiecare cu cel mult 9 cifre. 
//Să se afişeze, în ordine descrescătoare, toate cifrele care apar în numerele date.

#include <stdio.h>
#pragma warning(disable:4996)
// ai nevoie de vector de frecventa de maxim 10 elemente
void rezolv()
{
    int a[10001], b[10], i, cif;
    i = 0;
    while (a[i])
    {
        while (a[i] != 0)
        {
            cif = a[i] % 10;
            b[cif]++;
            a[i] /= 10;
        }
        i++;
    }
    i = 0;
    for (cif = 9; cif >= 0; cif--)
    {
        while (b[cif] != 0)
        {
            printf("%d ", cif);
            i++;
            b[cif]--;
            if (i % 20 == 0) 
                printf("%d", a[i]);
            printf("\n");
        }
    }
}
int main()
{
    rezolv();
}
