#include<stdio.h>

#include<math.h>

int main() {
    double l, f, vol, v, d, s;
    while (1) {
        scanf("%lf%lf", & l, & f);
        if (l == 0 && f == 0)
            break;
        else {
            d = l;
            s = d + l;
            v = sqrt(2 * l * f);
            vol = (v * 3600) / s;

            printf("%.8lf %.8lf\n", v, vol);

        }

    }

    return 0;
}