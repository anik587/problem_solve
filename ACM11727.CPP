#include<stdio.h>

int main() {
    int i, t, a, b, c, p;
    scanf("%d", & t);
    for (i = 1; i <= t; i++) {
        scanf("%d%d%d", & a, & b, & c);
        if (a > b) {
            p = a;
            a = b;
            b = p;

        }
        if (b > c) {
            p = b;
            b = c;
            c = p;
        }
        if (a > b) {
            p = a;
            a = b;
            b = p;
        }
        printf("Case %d: %d\n", i, b);

    }

    return 0;

}