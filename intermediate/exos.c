#include <stdio.h> 

int main(void)
{
	int a, b;
	printf("Calcul du PGCD\nVeuillez entrer deux nombres : ");
	scanf("%d %d", &a, &b);
	if (a < b)
		printf("%d doit être supérieur à %d !\n", a, b);
	else
	{
		int reste = a % b;
		while (reste != 0)
		{
			a = b;
			b = reste;
			reste = a % b;
		}
		printf("PGCD : %d\n", b);
	}

	printf("Miles\tKm\n");
	for (int i = 5; i < 31; i += 5)
	{
		printf("%d\t%d\n", i, i * 8/5);
	}

	unsigned int compteur = 0;
	unsigned char c;
	printf("Entrez votre phrase : ");

	do
	{
		scanf("%c", &c);
		if (c == 'e' || c == 'E')
			++compteur;
	} while (c != '.' && c != '?' && c != '!');

	printf("Vous avez écris %u e dans votre phrase !\n", compteur);


	return 0;
}
