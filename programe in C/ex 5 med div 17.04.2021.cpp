// Ex 5. Să se scrie un program care să determine cel mai mare divizor comun a două numere naturale citite de la tastatură.

#include <stdio.h>
#pragma warning (disable:4996)
void CMMDC(int a,int b)
{
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	printf("%d", a);
}

int main()
{
	int a, b, i, cmmdc;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	for (i = 1; i <= a; i++)
		if ((a % i == 0) && (b % i == 0))
			cmmdc = i;
	//printf ("%d", cmmdc);
	CMMDC(a, b);
	return 0;
}
