#include <stdio.h>
#include <stddef.h>

size_t strlen(char*);
char *strcpy(char*, char*);
char *strcat(char*, char*);
int strcmp(char*, char*);
char *strchr(char*, int);
char *strpbrk(char*, char*);

int main(void)
{
	printf("Longueur : %zu\n", strlen("B"));

	char chaine[25] = "Bonjour";
    	strcat(chaine, " tout le monde");
    	printf("%s\n", chaine);

	char chaine1[] = "Bonjour";
    	char chaine2[] = "Bonjour";

    	if (strcmp(chaine1, chaine2) == 0)
        	printf("Les deux chaînes sont identiques\n");
    	else
	        printf("Les deux chaînes sont différentes\n");

	char chaine3[] = "Bonjour";
    	char *p = strchr(chaine3, 'o');

    	if (p != NULL)
        	printf("La chaîne `%s' contient la lettre %c\n", chaine3, *p);

	char *p2 = strpbrk(chaine, "aeiouy");

	if (p2 != NULL)
        	printf("La première voyelle de la chaîne `%s' est : %c\n", chaine3, *p2);
    	return 0;
}

char *strpbrk(char *chaine, char *liste)
{
	for (unsigned i = 0; chaine[i] != '\0'; ++i)
	{
		for (unsigned j = 0; liste[j] != '\0'; ++j)
		{
			if (chaine[i] == liste[j])
				return &chaine[i];
		}
	}
	return NULL;


}

char *strchr(char *chaine, int ch)
{
	while(*chaine != '\0')
	{
		if (*chaine == ch)
			return chaine;
		else
			++chaine;
	}
	return NULL;

}

int strcmp(char *chaine1, char *chaine2)
{
	int n = 0;
	for (unsigned i = 0; chaine1[i] != '\0' || chaine2[i] != '\0'; ++i)
	{
		if (chaine1[i] != chaine2[i])
			return -1;
	}
	return 0;
}

char *strcat(char *destination, char *source)
{
	size_t index = strlen(destination) + 1;
	int j = 0;
	int i = 0;
	for (i = index; source[i] != '\0'; ++i)
	{
		destination[i] = source[j];
		++j;
	}
	destination[i+1] = '\0';
	return destination;
}

char *strcpy(char *destination, char *source)
{
	unsigned i;
	for (i = 0; source[i] != '\0'; ++i)
	{
		destination[i] = source[i];
	}
	destination[i+1] = '\0';
	return destination;
}

size_t strlen(char *chaine)
{
	size_t size = 0;
	for (unsigned i = 0; chaine[i] != '\0'; ++i)
	{
		++size;
	}
	return size;
}
