#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("test.txt", "w");
	if (fp == NULL)
		return EXIT_FAILURE;
	if (fputs("Salut les gens !\n", fp) == EOF)
		return EXIT_FAILURE;
	if (fclose(fp) == EOF)
		return EXIT_FAILURE;

	FILE *fp2 = fopen("test2.txt", "r");
	if (fp2 == NULL)
		return EXIT_FAILURE;

	int ch = fgetc(fp2);

	if (ch != EOF)
		printf("%c\n", ch);

	if (fclose(fp2) == EOF)
		return EXIT_FAILURE;

	FILE *fp3 = fopen("test3.txt", "r");
	char ligne[255];

	if (fp3 == NULL)
		return EXIT_FAILURE;
	if (fgets(ligne, sizeof ligne, fp3) != NULL)
		printf("%s", ligne);

	if (fclose(fp3) == EOF)
		return EXIT_FAILURE;
	return 0;
}


