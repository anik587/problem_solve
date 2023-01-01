#include<stdio.h>

#include<math.h>

int main() {
    double a, b, c, d, e, f, i, j, n, k, x, m;
    while (1) {
        a1: scanf("%lf", & n);
        x = 1;
        if (n == 0)
            break;
        else {
            m = (int)(n / 5);

            for (k = 1; k <= m; k++) {
                f = (int)(n / 2);
                for (i = x; i < f; i++) {
                    a = pow(i, 3);
                    if (a > n) {
                        b = a - n;
                        f = i;

                    }

                }
                x = i;
                for (j = 1; j < i; j++) {
                    c = pow(j, 3);
                    if (c == b) {
                        printf("%.0lf %.0lf\n", i - 1, j);
                        i = j;
                        goto a1;
                    }
                }

            }
            printf("No solution\n");
        }
    }
    return 0;
}