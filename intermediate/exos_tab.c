#include <stdio.h>

int somme(int*, size_t);
int max(int*, size_t);
int min(int*, size_t);
_Bool recherche(int*, int, size_t);
int* inverse(int*, size_t);
void affiche(int*, size_t);

int main(void)
{
	int tab1[] = {45,32,76,9,39};
	int tab2[] = {};
	printf("Somme du tableau : %d\n", somme(tab1, sizeof tab1 / sizeof tab1[0]));
	printf("Maximum : %d\n", max(tab1, sizeof tab1 / sizeof tab1[0]));
	printf("Minimum : %d\n", min(tab1, sizeof tab1 / sizeof tab1[0]));
	int nombre;
	printf("Quel nombre recherchez-vous : ");
	scanf("%d", &nombre);
	recherche(tab1, nombre, sizeof tab1 / sizeof tab1[0]) ? printf("Il est présent !\n") : printf("Il n'est pas présent !\n");
	int new_tab[(sizeof tab1 / sizeof tab1[0])];
	new_tab = inverse(tab1, sizeof tab1 / sizeof tab1[0]);
	affiche(new_tab, sizeof tab1 / sizeof tab1[0]);
	return 0;
}

void affiche(int* tab, size_t taille)
{
	for (unsigned i = 0; i < taille; ++i)
	{
		printf("[%d] ", *(tab+i));
	}
	printf("\n");
}

int* inverse(int* tab, size_t taille)
{
	static int new_tab[taille];
	for (unsigned i = 0; i < taille; ++i)
	{
		new_tab[i] = tab[taille-i-1];
	}
	return new_tab;
}


_Bool recherche(int* t, int n, size_t taille)
{
	for (unsigned i = 0; i < taille; ++i)
	{
		if (t[i] == n)
			return 1;
	}
	return 0;
}


int max(int *tab, size_t taille)
{
	int max = 0;
	for (unsigned i = 0; i < taille; ++i)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	return max;
}


int min(int *tab, size_t taille)
{
	int min = tab[0];
	for (unsigned i = 1; i < taille; ++i)
	{
		if (tab[i] < min)
			min = tab[i];
	}
	return min;
}


int somme(int *tab, size_t taille)
{
	int somme = 0;
	for (unsigned i = 0; i < taille; ++i)
	{
		//somme += tab[i];
		somme += *(tab + i);
	}
	return somme;
}
