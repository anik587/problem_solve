#include<stdio.h>

#include<string.h>

char s;
int main() {
    int hou, min, i, j, t, p, d1, d2, mi, a, b, c, tim, n;
    scanf("%d", & t);
    p = 1;
    mi = 1000000;
    while (p <= t) {
        scanf("%d%d%c%d", & n, & hou, & s, & min);
        for (i = 1; i <= n; i++) {
            scanf("%d%c%d%d", & a, & s, & b, & c);
            d1 = a - hou;
            if (d1 < 0)
                d1 = 24 - (-1 * d1);

            d2 = b - min;
            if (d2 < 0)
                d1 = d1 - 1;
            if (d1 < 0)
                d1 = 24 - (-1 * d1);
            if (d2 < 0)
                d2 = 60 - (-1 * d2);
            d1 = d1 * 60;
            tim = d1 + d2 + c;
            if (tim <= mi)
                mi = tim;

        }
        printf("Case %d: %d\n", p, mi);
        p++;
        mi = 1000000;
    }
    return 0;
}