#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec;
    int min, s;

    printf("input the second :");
    scanf("%i", &sec);

    min = sec / 60;
    s = sec % 60;

    printf("the time is %i : %i\n", min, s);

    return 0;
}
