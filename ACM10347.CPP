#include<stdio.h>

#include<math.h>

int main() {
    double s, area, b, c, p, q, r;
    while (scanf("%lf%lf%lf", & p, & q, & r) != EOF) {
        area = 0;
        s = (p + q + r) / 2;
        b = (s * (s - p) * (s - q) * (s - r));
        if (b < 0)
            printf("-1.000\n");
        else {
            c = sqrt(b);
            area = (4 * c) / 3.0;
            if (area <= 0)
                printf("-1.000\n");
            else
                printf("%.3lf\n", area);
        }
    }
    return 0;
}