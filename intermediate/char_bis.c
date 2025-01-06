#include <stdio.h>

int main(void)
{
	char chaine[8];
	unsigned long long n = 64;

	int test = snprintf(chaine, sizeof chaine, "%llu", n);
	printf("Test = %d\n", test);
	printf("Chaine : %s\n", chaine);

	printf("Size of chaine : %zu\n", sizeof chaine);
	printf("Size of char : %zu\n", sizeof(char));
	return 0;
}
