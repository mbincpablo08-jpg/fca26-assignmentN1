// Exercise 7: Two Largest Values
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        return 0;
    }

    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2) {
        return 0;
    }

    double max1, max2;
    if (a >= b) {
        max1 = a;
        max2 = b;
    } else {
        max1 = b;
        max2 = a;
    }

    for (int i = 2; i < n; i++) {
        double val;
        if (scanf("%lf", &val) != 1) {
            break;
        }
        if (val > max1) {
            max2 = max1;
            max1 = val;
        } else if (val > max2) {
            max2 = val;
        }
    }

    printf("%g %g\n", max1, max2);

    return 0;
}
