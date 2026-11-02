// Exercise 2: Harmonic Series
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("%.2f\n", sum);

    return 0;
}
