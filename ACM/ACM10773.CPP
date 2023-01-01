#include<stdio.h>

#include<math.h>

int main() {
    int i;
    double a, t1, t2, u, v, d, t, s;
    scanf("%lf", & t);
    i = 1;
    while (i <= t)

    {
        scanf("%lf%lf%lf", & d, & v, & u);
        if (u == 0)
            goto a1;
        t2 = d / u;
        a = u * u - v * v;
        if (a > 0)
            t1 = d / sqrt(a);
        else
            goto a1;
        s = t1 - t2;
        if (s > 0)
            printf("Case %d: %.3lf\n", i, s);
        else
            a1: printf("Case %d: can't determine\n", i);
        i++;

    }

    return 0;
}