//Se consideră subprogramul multiplu, cu doi parametri, care:
//– primeşte prin intermediul parametrilor a şi k două numere întregi de cel mult 4 cifre;
//– returnează cel mai mic multiplu al lui k mai mare sau egal cu a.

#include <stdio.h>
#pragma warning(disable:4996)

int main(int a, int k)
{
    int max;
    for (a = 0; a <= 9999; a++)
    
        for (k = 0; k <= 9999; k++) 
        {
            if (k > 9999 || a > 9999)
            {
                printf("numar prea mare");
                break;
            }
        }
    
    printf("Scrie 2 numere pozitive ");
    scanf("%d %d", &a, &k);

    // maximum number between n1 and n2 is stored in min
    max = (a > k) ? a : k;

    while (1) {
        if (max % a == 0 && max % k == 0) {
            printf("Cel mai mic multipplu comun intre %d si %d este %d.", a, k, max);
            break;
        }
        ++max;
    }
    return 0;
}



