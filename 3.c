#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum_given(int n) {
    assert(n >= 1);

    if (n > 1) {
        return n + sum_given(n-1);
    } else {
        return 1;
    }
}

int sum_tail(int n, int prev) {
    assert(n >= 1);

    if (n > 1) {
        prev += n;
        return sum_tail(n-1, prev);
    } else {
        return prev;
    }
}

int sum_loop(int n) {
    assert(n >= 1);

    int sum = 0;
    for(int i = 0; i <= n; ++i) {
        sum += i;
    }

    return sum;
}


int main(void) {
    int test_given, test_tail, test_loop, n;

    n = 10;

    test_given = sum_given(n);

    test_tail = sum_tail(n, 1);

    test_loop = sum_loop(n);

    printf("Test given: %d\n Test tail: %d\n Test loop: %d\n", test_given, test_tail, test_loop);

    return 0;
}