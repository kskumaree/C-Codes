#include <stdio.h>

/* Function that modifies value using pointer */
void increment(int *p) {
    *p = *p + 1;   // dereference pointer
}

int main(void) {
    int x = 10;

    int *ptr = &x;   // pointer stores address of x

    printf("Value of x        = %d\n", x);
    printf("Address of x      = %p\n", (void*)&x);

    printf("\nUsing pointer:\n");
    printf("ptr (address)    = %p\n", (void*)ptr);
    printf("*ptr (value)     = %d\n", *ptr);

    increment(ptr);  // pass address

    printf("\nAfter increment():\n");
    printf("x = %d\n", x);

    return 0;
}
