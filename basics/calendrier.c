#include <stdio.h>

int main(void)
{
	int jour;
	int mois;
	int total = 0;
	printf("Entrez une date (jj/mm) : ");
	scanf("%d/%d", &jour, &mois);

	jour -= 1;

	for (int i = 1; i < mois; i++)
	{
		if (i % 2 == 0)
		{
			total += 30;
		}
		else
		{
			total += 31;
		}
	}

	total -= 2; // Supprime les jours de février
	total += jour;
	printf("Nombre total de jours : %d\n", total);

	switch (total % 7)
	{
		case 0:
			printf("C'est un samedi !\n");
			break;
		case 1:
			printf("C'est un dimanche !\n");
			break;
		case 2:
			printf("C'est un lundi !\n");
			break;
		case 3:
			printf("C'est un mardi !\n");
			break;
		case 4:
			printf("C'est un mercredi !\n");
			break;
		case 5:
			printf("C'est un jeudi !\n");
			break;
		case 6:
			printf("C'est un vendredi !\n");
			break;
	}
	return 0;
}
