#include <stdio.h>

void affiche_tab(int*, int);
void affiche_tab_multi(int (*)[], unsigned, unsigned);

int main(void)
{
	int tab[4] = {52,65,6};

	printf("Numéro 1 : %d\n", *tab);
	printf("Numéro 2 : %d\n", *(tab + 1));
	printf("Numéro 3 : %d\n", *(tab + 2));
	printf("Numéro 4 : %d\n", *(tab + 3));

	int tab2[] = {5,78,23,90,45,34};
	affiche_tab(tab2, 6);

	int tab3[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
	affiche_tab_multi(tab3, 5, 2);
	return 0;
}


void affiche_tab(int *t, int taille)
{
	for (unsigned i = 0; i < taille; i++)
	{
		printf("tab[%u] = %d\n", i, t[i]);
	}
}


void affiche_tab_multi(int (*tab)[2], unsigned n, unsigned m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("[%d]", tab[i][j]);
		}
		printf("\n");
	}
}
