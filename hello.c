#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;

    printf("input two integers :");
    scanf("%i %i", &x, &y);

    printf("+ result is %i\n", x + y);
    printf("- result is %i\n", x - y);
    printf("* result is %i\n", x * y);
    printf("/ result is %i\n", x / y);
    printf("%% result is %i\n", x % y);

    return 0;
}
