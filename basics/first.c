// Commentaire avant 
#include <stdio.h>


int main(void)
{
	int variable1 = 40;
	int variable2 = 60;
	_Bool variable3 = 1;
	double variable4 = 42.9;
	printf("Variable 1 : %d\nVariable 2 : %d\nVariable 3 : %i\nVariable 4 : %.2f\n", variable1, variable2, variable3, variable4);
	int age;
	printf("Entrez votre âge : ");
	scanf("%d", &age);
	printf("Vous avez %d an(s)\n", age);

	int heure;
	printf("Quelle heure est-il ? : ");
	scanf("%d", &heure);
	(heure > 8 && heure < 20) ? printf("Il fait jour !\n") : printf("Il fait nuit !\n");

	int coups;
	printf("Entrez votre nombre de coups : ");
	scanf("%d", &coups);
	(coups < 2) ? printf("Vous avez %d coup à jouer ! \n", coups) : printf("Vous avez %d coups à jouer ! \n");

	int nombre;
	printf("Entrez un nombre : ");
	scanf("%d", &nombre);

	int i = 2;
	while (i < nombre && nombre % i != 0)
		++i;

	(i == nombre) ? printf("%d est premier !\n", nombre) : printf("%d n'est pas premier\n", nombre);



	return 0;
}
