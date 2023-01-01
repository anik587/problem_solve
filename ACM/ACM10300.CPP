#include<stdio.h>

#include<math.h>

int main() {
    double a, b, c, d, e, f, p;
    int i, j, n, m;
    scanf("%d", & n);
    i = 1;
    while (i <= n) {
        p = 0;
        scanf("%d", & m);
        for (j = 1; j <= m; j++) {
            scanf("%lf%lf%lf", & a, & b, & c);
            d = a / b;
            e = d * c;
            f = e * b;
            p = p + f;
        }
        printf("%.0lf\n", p);
        i++;

    }

    return 0;
}