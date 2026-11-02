// Exercise 6: Ascending or Descending
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int prev;
    if (scanf("%d", &prev) != 1) {
        return 0;
    }

    int is_asc = 1;
    int is_desc = 1;

    for (int i = 1; i < n; i++) {
        int curr;
        if (scanf("%d", &curr) != 1) {
            break;
        }
        if (curr <= prev) {
            is_asc = 0;
        }
        if (curr >= prev) {
            is_desc = 0;
        }
        prev = curr;
    }

    if (n > 1 && is_asc) {
        printf("ascending sequence\n");
    } else if (n > 1 && is_desc) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }

    return 0;
}
