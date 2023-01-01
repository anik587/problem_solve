#include<stdio.h>

#include<math.h>

int main() {
    double a, b, c, k, r, x, y;
    while (scanf("%lf%lf%lf", & a, & b, & c) != EOF) {
        r = 0;
        k = (a + b + c) / 2;
        x = (k - a) * (k - b) * (k - c);
        if (x <= 0)
            printf("The radius of the round table is: %.3lf\n", r);
        else {
            y = x / k;
            r = sqrt(y);
            printf("The radius of the round table is: %.3lf\n", r);
        }

    }
    return 0;
}