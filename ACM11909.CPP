#include<stdio.h>

#include<math.h>

#define pi 2 * acos(0.0)
int main() {
    double l, h, w, the, s, rea, a, h1, red, red_1, free;
    while (scanf("%lf%lf%lf%lf", & l, & w, & h, & the) != EOF) {

        rea = (the * pi) / 180.0;
        h1 = l * tan(rea);
        a = (l / cos(red));
        s = (a + h1 + l) / 2.0;

        red = sqrt(s * (s - a) * (s - h1) * (s - l));
        red_1 = l * h * w;
        free = red_1 - red;
        printf("%.3lf mL\n", free);
    }
    return 0;
}