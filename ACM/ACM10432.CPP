#include<stdio.h>

#include<math.h>

#define pi 2 * acos(0)
int main() {
    double a, b, d;
    while (scanf("%lf%lf", & a, & b) != EOF) {
        d = (sin(2 * pi / b));
        d = ((d * a * a) / 2) * b;
        printf("%.3lf\n", d);
    }
    return 0;
}