// Exercise 1: Average
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int val;
        if (scanf("%d", &val) == 1) {
            sum += val;
        }
    }

    double avg = sum / n;
    printf("%.2f\n", avg);

    return 0;
}
