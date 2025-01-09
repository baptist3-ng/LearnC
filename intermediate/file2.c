#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buffer[255];
	FILE *fp = fopen("test4.txt", "r");

	if (fp == NULL)
	{
		fprintf(stderr, "Le fichier n'existe pas !\n");
		return EXIT_FAILURE;
	}
	long t = ftell(fp);
	if (t < 0)
		return EXIT_FAILURE;
	else
		printf("Position actuelle : %ld\n", t);

	if (fgets(buffer, sizeof buffer, fp) != NULL)
		printf("%s", buffer);
	else if (feof(fp))
	{
		fprintf(stderr, "Fin du fichier !\n");
		return EXIT_FAILURE;
	}
	else
	{
		fprintf(stderr, "Erreur lors de la lecture !\n");
		return EXIT_FAILURE;
	}

	if (fclose(fp) == EOF)
		return EXIT_FAILURE;

	return 0;
}
