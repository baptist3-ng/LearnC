#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = malloc(10 * sizeof(int));

	if (p == NULL)
		return EXIT_FAILURE;

	for (unsigned i = 0; i < 10; ++i)
	{
		*(p+i) = i * 10;
		printf("Valeur [%d] : %d\n", i, p[i]);
	}

	int *tmp = realloc(p, 20 * sizeof(int));
	if (tmp == NULL)
	{
		free(p);
		return EXIT_FAILURE;
	}

	p = tmp;
	for (unsigned i = 10; i < 20; ++i)
	{
		p[i] = 10 * i;
	}
	for (unsigned i = 0; i < 20; ++i)
	{
		printf("Valeur p[%d] : %d\n", i, p[i]);
	}
	free(p);
	return 0;
}
