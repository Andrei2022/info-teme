// Să se scrie o funcție C++ care să determine oglinditul unui număr natural transmis ca parametru. 
// Funcția va întoarce rezultatul prin intermediul unui parametru de ieşire.

#include <stdio.h>
#pragma warning (disable:4996)

void oglindit(int& n, int& inv)

{
	scanf("%d", &n);
	inv = 0;

	while (n)
	{

		inv = inv * 10 + n % 10;

		n /= 10;

	}

}

int main()
{
	int n, inv;
	//n = 12345;
	oglindit(n, inv);
	printf("Numarul inversat este %d", inv);

}
