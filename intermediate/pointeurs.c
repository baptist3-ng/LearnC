#include <stdio.h>

void test(int *pa, int *pb)
{
    *pa = 10;
    *pb = 20;
}


int main(void)
{
    int a;
    int b;
    int *pa;
    int *pb;

    pa = &a;
    pb = &b;

    test(&a, &b);
    test(pa, pb);
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", (void *)pa, *pb);
    return 0;
}
