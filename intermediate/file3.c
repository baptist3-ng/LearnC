#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ligne[255];
	FILE *fp = fopen("test4.txt", "w+");

	if(fp == NULL)
	{
		fprintf(stderr, "Error while opening file !\n");
		return EXIT_FAILURE;
	}

	// Write some text
	if(fputs("Welcome everyone !\n", fp) == EOF)
	{
		fprintf(stderr, "Error while writing on file !\n");
		return EXIT_FAILURE;
	}

	if((fseek(fp, 0, SEEK_SET)))
	{
		fprintf(stderr, "Error !\n");
		return EXIT_FAILURE;
	}

	if(fgets(ligne, sizeof ligne, fp) == NULL)
	{
		fprintf(stderr, "Error while reading file !\n");
		return EXIT_FAILURE;
	}

	if(fclose(fp) == EOF)
	{
		fprintf(stderr, "Error while closing file !\n");
		return EXIT_FAILURE;
	}
	printf("Vous avez ajouté : %s", ligne);
	return 0;
}
