//7. Să se verifice dacă un șir este: șir constant, șir strict crescător, 
//șir crescător, șir strict descrescător, șir descrescător, șir neordonat.

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, v[100], i, k;
	k = -1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &v[i]);

	i = 1;

	while (i < n && v[i] == v[i + 1])
	{
		i++;
	}
	if (i == n)
	{
		k = 0;
	}
	i = 1;

	while (i < n && v[i] <= v[i + 1]) // crescator
	{
		i++;
		if (v[i] < v[i + 1])
			k = 3;
	}
	if (i == n && k == 3)
		k = 3;
	i = 1;
	while (i < n && v[i] < v[i + 1]) //strict crescator
	{
		i++;
	}
	if (i == n)
		k = 1;
	i = 1;

	while (i < n && v[i] >= v[i + 1]) // descrescator
	{

		if (v[i] > v[i + 1])
			k = 4;
		i++;
	}
	if (i == n && k == 4)
		k = 4;
	i = 1;
	while (i<n && v[i]>v[i + 1]) // strict descrescator
	{
		i++;
	}
	if (i == n)
		k = 2;
	i = 1;

	// strict!
	switch (k)
	{
	case 0:
		printf("Sir constant");
		break;
	case 1:
		printf("Sir strict crescator");
		break;
	case 2:
		printf("Sir strict descrescator");
		break;
	case 3:
		printf("Sir crescator");
		break;
	case 4:
		printf("Sir descrescator");
		break;
	default:
		printf("Sir neordonat");
	}
}