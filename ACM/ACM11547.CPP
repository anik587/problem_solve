#include<stdio.h>

#include<math.h>

int main() {
    double t, n, a, b, c, d, e, i, h;
    long int g, f;
    i = 0;
    scanf("%lf", & t);
    while (i < t) {
        scanf("%lf", & n);
        a = n * 567;
        b = a / 9;
        c = b + 7492;
        d = c * 235;
        e = d / 47;
        f = e - 498;
        g = f % 100;
        h = g / 10;
        if (h < 0)
            h = h * -1;

        printf("%.0lf\n", h);

        i++;
    }
    return 0;
}