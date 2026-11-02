// Exercise 3: Sum of Positives and Negatives
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int val;
    int pos_sum = 0;
    int neg_sum = 0;

    while (scanf("%d", &val) == 1 && val != 0) {
        if (val > 0) {
            pos_sum += val;
        } else if (val < 0) {
            neg_sum += val;
        }
    }

    printf("%d %d\n", pos_sum, neg_sum);

    return 0;
}
