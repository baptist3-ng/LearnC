#include <stdio.h>
#include <stddef.h>

struct exemple {
	double d;
	int a,b,c;
};


int main(void)
{
	size_t t = sizeof(int);
	printf("Char = %zu\n", sizeof(char));
	printf("Int = %zu\n", t);
	printf("unsigned int = %zu\n", sizeof(unsigned int));

	printf("-----------------\nTaille structure = %zu\n", sizeof(struct exemple));
	return 0;
}
