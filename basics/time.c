#include <stdio.h>
#include <stdlib.h>

struct temps{
	unsigned heure;
	unsigned minute;
	double seconde;
};

double convert(struct temps);


int main(void)
{
	struct temps t1, t2;
	printf("Première mesure (hh:mm:ss.xxx) : ");
	if (scanf("%d:%d:%lf", &t1.heure, &t1.minute, &t1.seconde) != 3)
	{
		printf("Mauvaise saisie !\n");
		return EXIT_FAILURE;
	}

	printf("Seconde mesure (hh:mm:ss.xxx) : ");
	if (scanf("%d:%d:%lf", &t2.heure, &t2.minute, &t2.seconde) != 3)
	{
		printf("Mauvaise saisie !\n");
		return EXIT_FAILURE;
	}

	double difference = convert(t2) - convert(t1);
	printf("Il y a %.3lf seconde(s) de différence.\n", difference);
	return 0;
}


double convert(struct temps t)
{
	double total = 0;
	for (int i = 0; i < t.heure; i++)
	{
		total += 3600;
	}
	for (int i = 0; i < t.minute; i++)
	{
		total += 60;
	}
	total += t.seconde;
	return total;
}

