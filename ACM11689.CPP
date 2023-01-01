#include<stdio.h>

#include<math.h>

int main() {
    int t, e, f, c, i, j, a, b, x, p, d;
    scanf("%d", & t);

    for (i = 1; i <= t; i++) {
        p = 0;
        x = 0;
        scanf("%d%d%d", & e, & f, & c);
        a = e + f;
        b = 1;
        for (j = 0;; j++) {
            b = a / c;
            d = a % c;
            if (b == 0)
                break;
            p += b;
            if (d > 0)
                x += d;
            a = b + d;

        }
        printf("%d\n", p);
    }
    return 0;
}