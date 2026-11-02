// Exercise 4: ASCII Table
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 26; i++) {
        char small = 'a' + i;
        char capital = 'A' + i;
        printf("'%c' %-4d '%c' %d\n", small, (int)small, capital, (int)capital);
    }

    return 0;
}
