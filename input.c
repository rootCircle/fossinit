#include <stdio.h>

int main(void) {
    char a, b;
    char cstring[35];

    printf("Enter values of a & b : ");
    scanf("%c %c",&a,&b);
    printf("Now the string : ");
    fgets(cstring,35,stdin);
    
    printf("a: %c, b: %c, cstring: %s\n", a, b, cstring);
    printf("Bye!\n");

    return 0;

}
