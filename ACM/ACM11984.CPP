#include<stdio.h>

int main() {
    double a, b, c, d, e, x, t;
    int i = 1;
    scanf("%lf", & t);
    while (i <= t) {
        scanf("%lf%lf", & a, & b);
        c = (a * 9) / 5 + 32;
        d = c + b;
        e = ((d - 32) / 9) * 5;
        printf("Case %d: %.2lf\n", i, e);
        i++;
    }
    return 0;
}