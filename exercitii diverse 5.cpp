//5. Se dă un vector cu n elemente, numere naturale. 
//Afișați în ordine crescătoare valorile prime din vector.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv()
{
    int n, i, j, k = 0, divizori, min, t;
    int v[100], x[100];
    printf("n=");
    scanf("%d", &n);
   
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) 
    {
        divizori = 0;
        for (j = 2; j <= v[i] / 2; j++) 
        {
            if (v[i] % j == 0)
                divizori++;
        }
        if (divizori == 0) 
        {
            x[k] = v[i];
            k++;
        }
    }

    for (i = 0; i < k; i++) 
        printf("%d ", x[i]);
    
}

int main()
{
    rezolv();
}