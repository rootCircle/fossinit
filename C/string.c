#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[5] = "Foss";

    char str2[5] = "Foss";

    if (str1 == str2) {
        printf("Same String!\n");
    }
    else {
        printf("Different String! How?\n");
    }

    return EXIT_SUCCESS;
}
