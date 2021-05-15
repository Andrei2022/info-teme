//4. Sa se stearga din vector toate elementele care sunt egale cu 0.

#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
    int n, v[101];
    scanf("%d",  &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &v[i]);
    for (int i = 1; i <= n; ++i)
        if (v[i] == 0) 
        {
            for (int j = i + 1; j <= n; ++j)
                v[j - 1] = v[j];
            n--;
            i--;
        }

    for (int i = 1; i <= n; ++i)
        printf("%d ", v[i]);
    return 0;
}

