#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool lire_ligne(char*, size_t);
bool est_palindrome(char*);
bool manque(char*);

int main(void)
{
	char mots[40];
	printf("Entrez un mot : ");
	if (!lire_ligne(mots, sizeof mots))
	{
		printf("Erreur de saisie !\n");
		return EXIT_FAILURE;
	}
	else
		est_palindrome(mots) ? printf("Votre mot est un palindrome !\n") : printf("Votre mot n'est pas un palindrome !\n");

	printf("Valeur de palindrome : %s\n", est_palindrome(mots) ? "true" : "false");

	char phrase[40];
	printf("Entrez votre code : ");
	if (!lire_ligne(phrase, sizeof phrase))
	{
		printf("Erreur de saisie\n");
		return EXIT_FAILURE;
	}
	else
		manque(phrase) ? printf("C'est bon !\n") : printf("C'est pas bon !\n");
	return 0;
}

bool manque(char *w)
{
	size_t len = 0;
	while (w[len] != '\0')
		++len;

	int ouvert = 0;
	int ferme = 0;

	for (size_t i = 0; i < len; ++i)
	{
		if (w[i] == '(')
			ouvert++;
	}
	for (size_t i = 0; i < len; ++i)
	{
		if (w[i] == ')')
			ferme++;
	}
	return ouvert == ferme;

}

bool est_palindrome(char *w)
{
	int size = 0;
	for (unsigned i = 0; w[i] != '\0'; i++)
	{
		size++;
	}
	printf("Size : %d\n", size);
	for (unsigned i = 0; i < size; ++i)
	{
		if (w[i] != w[size - i - 1])
			return false;
	}
	return true;
}


bool lire_ligne(char *ptr, size_t max)
{
	size_t i;
	for (i = 0; i < max - 1; ++i)
	{
		char c;
		if (scanf("%c", &c) != 1)
			return false;
		if (c == '\n')
			break;
		*(ptr + i) = c;
	}
	*(ptr + i + 1) = '\0';
	return true;
}
