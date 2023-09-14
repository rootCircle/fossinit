#include <stdio.h>
int n = 12;
#define n c

int main(void)
{
    int c = 420;
    n = 10;

    printf("n: %d, c: %d\n", n, c);
    return -1;
}
