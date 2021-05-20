//Scrieţi un program C / C++ care citeşte de la tastatură două numere naturale nenule n şi m
//(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
//(numerotate de la 1 la n) şi m coloane(numerotate de la 1 la m) cu proprietatea că fiecare
//element Aij memorează cea mai mică dintre valorile indicilor i şi j(1≤i≤n, 1≤j≤m).
//Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
//fiecărei linii fiind separate prin câte un spaţiu.

#include <stdio.h>
#pragma warning (disable:4996)


void matrice(int v[100][100],int &n,int &m)
{
	int i, j;
	scanf("%d", &n);
	scanf("%d", &m);

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= m; j++)
		{
			if (i < j)
				v[i][j] = i;
			else
				v[i][j] = j;
		}
	}
}

int main()
{
	int v[100][100],i,j,n,m;
	matrice(v,n,m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", v[i][j]);
			printf("\n");
	}
}