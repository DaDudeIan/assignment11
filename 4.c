#include <stdio.h>
#include <assert.h>

int fib(int n, int a, int b) {
    assert(n >= 0);

    if(n == 0) {
        return a;
    } else if(n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else {
        return fib(n-1, b, a+b);
    }
}

int main(void) {
    int x, n;

    n = 11;

    x = fib(n-1, 1, 2);

    printf("For %d: %d\n", n, x);

    return 0;
}