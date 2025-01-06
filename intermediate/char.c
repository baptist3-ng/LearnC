#include <stdio.h>

int main(void)
{
	char mot[] = "Bonjour";
	char *ptr = "hello";
	printf("%zu\n", sizeof mot);
	printf("%s\n", mot);
	printf("%c\n", *(ptr+1));

	char phrase[60];
	printf("Ecrivez une phrase : \n");
	scanf("%59s", phrase);
	printf("%s\n", phrase);
	return 0;
}
