//4. Se dau n numere întregi. Să se insereze între oricare două numere de aceeași paritate media lor aritmetică.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int &n, int v[101])
{
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&v[i]);
    }

}

int main()
{
    int n, v[101], i,j;
    float k;
    rezolv(n, v);
    for (i = 1; i < n; i++)
    {
        if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0))
        {
            k = (float)(v[i] + v[i + 1]) / 2;
            n++;
            for (j = n; j > i + 1; j--)
            {
                v[j] = v[j - 1];
            }
            v[i + 1] = k;
            i++;

        }

    }

    for (i = 1; i <= n; i++)
        printf("%d ", v[i]);
}