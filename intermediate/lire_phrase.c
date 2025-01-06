#include <stdio.h>
#include <stdbool.h>

bool lire_ligne(char*, size_t);

int main(void)
{
	char chaine[255];
	printf("Ecrivez une phrase : ");

	if (lire_ligne(chaine, sizeof chaine))
		printf("Vous avez écrit : %s", chaine);
	else
		printf("Erreur de saisie !");

	return 0;
}

bool lire_ligne(char *ptr, size_t max)
{
	size_t i;
	for (i = 0; i < max - 2; ++i)
	{
		char c;
		if (scanf("%c", &c) != 1)
			return false;
		if (c == '\n')
			break;
		*(ptr + i) = c;
	}
	*(ptr + i) = '\n';
	*(ptr + i + 1) = '\0';
	return true;
}


