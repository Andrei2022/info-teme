//3. Să se insereze într-un șir după fiecare element impar triplul său.

#include <stdio.h>
#pragma warning(disable:4996)

void rezolv(int& n, int v[50])
{
	int i, k;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
		scanf("%d", &v[i]);

	for (k = 1; k <= n; k++) {
		if (v[k] % 2 == 1)
		{
			n++;
			for (i = n; i > k+1; --i)
				v[i] = v[i - 1];
			v[k+1] = v[k]*3;
			k++;
		}

	}

}



int main()
{
	int n, v[50], i;
	rezolv(n, v);
	for (i = 1; i <= n; ++i)
		printf("%d ", v[i]);
}