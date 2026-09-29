#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec;
    int h, m, s;

    printf("input the second : ");
    scanf("%i", &sec);

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    printf("The time for %i second is %i : %i : %i\n", sec, h, m, s);

    return 0;
}