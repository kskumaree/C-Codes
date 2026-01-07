#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%zu ", sizeof(arr));
    printf("%zu ", sizeof(p));
    printf("%d ", *(p + 2));
    printf("%d\n", p[3]);

    return 0;
}
