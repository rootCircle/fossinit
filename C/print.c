#include <stdio.h>

int main(void)
{   
    printf("%i %i %c %i %i %c %i %i %c %i %i %s", 
           '1' + '5' + '9',      // 159
           '9' - '2',            // 7
           '9' - 2,              // still 7
           '9' - 2,              // it's 55
           '5' + 2,              // still 55
           '5' + 2,              // no, it's 7
           1 * 1,                // one
           0 * '1',              // zero
           '0' * '1',            // still 0
           '1' * '1',            // 2401
           '1' * '0',            // gimme my zero back
           "C is love\n");
    return 0;
}
