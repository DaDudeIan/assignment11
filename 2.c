#include <stdio.h>

int func(int n) {
    if(n > 1) {
        int tmp = 2*n-1;
        return tmp + func(n-1);
    } else {
        return 1;
    }
}

int main(void) {
    int x, n;

    scanf("%d", &n);

    x = func(n);

    printf("%d\n", x);

    return 0;
}