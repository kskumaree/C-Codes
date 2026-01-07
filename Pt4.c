//Returning Multiple Values from a Function
#include <stdio.h>
#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff)
{
    *sum  = a + b;
    *diff = a - b;
}

int main(void)
{
    int x = 10, y = 3;
    int s, d;

    calculate(x, y, &s, &d);

    printf("Sum = %d\n", s);
    printf("Diff = %d\n", d);

    return 0;
}
