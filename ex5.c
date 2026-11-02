// Exercise 5: Greatest Common Divisor
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int x, y;
    if (scanf("%d %d", &x, &y) != 2) {
        return 0;
    }

    int M = (x > y) ? x : y;
    int m = (x > y) ? y : x;

    while (m != 0) {
        int r = M % m;
        if (r == 0) {
            break;
        }
        M = m;
        m = r;
    }

    printf("%d\n", m);

    return 0;
}
