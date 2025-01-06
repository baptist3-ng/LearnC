#include <stdio.h> 

int main(void)
{
	printf("Bonjour\n");
	int x, y;
	printf("Veuillez saisir le premier nombre : ");
	scanf("%d", &x);
	printf("Veuillez saisir le second nombre : ");
	scanf("%d", &y);

	printf("Calculs : \n");
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %.3f\n", x, y, (double)x/(double)y);
	printf("Au revoir !\n");
	return 0;
}
