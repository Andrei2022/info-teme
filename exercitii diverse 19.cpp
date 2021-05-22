//19. Scrieţi un program care citeşte de la tastatură un număr natural n cu exact 5 cifre şi 
//construieşte în memorie o matrice cu 6 linii şi 6 coloane ale cărei elemente vor primi valori 
//după cum urmează: 
//• elementele aflate pe diagonala principală sunt toate nule; 
//• elementele de pe linia 1, aflate deasupra diagonalei principale precum şi elementele de pe coloana 1, aflate sub 
//diagonala principală au toate valoarea egală cu cifra unităţilor lui n; 
//• elementele de pe linia 2, aflate deasupra diagonalei principale precum şi elementele de pe coloana 2, aflate sub 
//diagonala principală 
//au toate valoarea egală cu cifra zecilor lui n; … 
//• elementele de pe linia 6, aflate deasupra diagonalei principale precum şi elementele de pe coloana 6, aflate sub 
//diagonala principală au toate valoarea egală cu cifra zecilor de mii a lui n;

#include <stdio.h>
#pragma warning(disable:4996)

void matrice(int &nr, int v[10][10])
{
    int cif[10], i, j;
    scanf("%d", &nr);

    for (i = 1; i <= 5; i++) 
    {
        cif[i] = nr % 10;
        nr /= 10;
    }

    for (i = 1; i <= 6; i++) 
    {
        for (j = 1; j <= 6; j++) 
        {
            if (i == j)
                v[i][j] = 0;
            else {
                if (i > j)
                    v[i][j] = cif[j];
                else
                    v[i][j] = cif[i];
            }
        }
    }

    
}

int main()
{
    int v[10][10], nr, i, j;
    matrice(nr, v);
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
            printf("%d ", &v[i][j]);
        printf("\n");
    }
}