// Mac users will have different output (Guess why?)

#include <stdio.h>

int main(void)
{
    int x = 0;
    int a = x++ + ++x;
    printf("%d %d %d", x++, ++x, a);
    return 0;
}
