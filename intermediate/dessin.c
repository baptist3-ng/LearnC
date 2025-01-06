#include <stdio.h>

void rectangle(int, int);
void rectangle_inv(int, int);
void triangle(int);

int main(void)
{
	int longueur,largeur;
	printf("Donnez la longueur : ");
	scanf("%d", &longueur);
	printf("Donnez la largeur : ");
	scanf("%d", &largeur);

	rectangle(longueur,largeur);
	printf("Dans l'autre sens : \n");
	rectangle_inv(longueur, largeur);

	printf("Entrez la hauteur du triangle : ");
	scanf("%d", &longueur);
	triangle(longueur);
	return 0;
}

void rectangle(int lon, int lar)
{
	for (int i = 0; i < lon; ++i)
	{
		for (int j = 0; j < lar; ++j)
		{
			printf("*");
		}
	printf("\n");
	}
}


void rectangle_inv(int lon, int lar)
{
	for (int i = 0; i < lar; ++i)
	{
		for (int j = 0; j < lon; ++j)
		{
			printf("*");
		}
	printf("\n");
	}
}

void triangle(int h)
{
	for (int i = 1; i < h+1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}

}
