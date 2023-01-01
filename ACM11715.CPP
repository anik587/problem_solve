#include<stdio.h>

#include<math.h>

int main() {
    double n, v, u, t, a, s;
    int i;
    i = 0;
    while (1) {
        scanf("%lf", & n);
        if (n == 0)
            break;
        i++;
        if (n == 1) {
            scanf("%lf%lf%lf", & u, & v, & t);
            a = (v - u) / t;
            s = u * t + .5 * a * pow(t, 2);
            printf("Case %d: %.3lf %.3lf\n", i, s, a);
        }
        if (n == 2) {
            scanf("%lf%lf%lf", & u, & v, & a);
            t = (v - u) / a;
            s = u * t + .5 * a * pow(t, 2);
            printf("Case %d: %.3lf %.3lf\n", i, s, t);
        }
        if (n == 3) {
            scanf("%lf%lf%lf", & u, & a, & s);

            v = sqrt(pow(u, 2) + 2 * a * s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n", i, v, t);
        }
        if (n == 4) {
            scanf("%lf%lf%lf", & v, & a, & s);
            u = sqrt(pow(v, 2) - 2 * a * s);
            t = (v - u) / a;
            printf("Case %d: %.3lf %.3lf\n", i, u, t);
        }

    }
    return 0;
}