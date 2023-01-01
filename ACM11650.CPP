#include<stdio.h>

int main() {
    int a, b, c, x, y, z, t, h, m, i;
    char p;
    scanf("%d", & t);
    for (i = 1; i <= t; i++) {
        scanf("%d%c%d", & h, & p, & m);

        a = h * 30;
        b = 360 - a;
        c = (b / 30);
        if (m == 0)
            c = c;
        else
            c = c - 1;
        if (c == 0)
            c = 12;
        if (c == -1)
            c = 11;
        x = m * 6;
        y = 360 - x;
        z = y / 6;
        if (z == 60)
            z = 0;
        if (c / 10 == 0 && z / 10 != 0)
            printf("0%d%c%d\n", c, p, z);
        else
        if (c / 10 != 0 && z / 10 == 0)
            printf("%d%c0%d\n", c, p, z);
        else
        if (c / 10 == 0 && z / 10 == 0)
            printf("0%d%c0%d\n", c, p, z);
        else
            printf("%d%c%d\n", c, p, z);
    }
    return 0;
}