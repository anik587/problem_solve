#include<stdio.h>

int main() {

    int n, i, j, k, b, d;

    double c, p, e, x, m;
    scanf("%d", & n);

    i = 1;
    while (i <= n) {
        b = 0;
        x = 0;
        int a[100] = {
            0
        };
        scanf("%lf", & m);
        for (j = 0; j < m; j++) {
            scanf("%d", & a[j]);
            b = b + a[j];
        }
        c = b / m;
        for (k = 0; k < m; k++) {
            if (c < a[k])
                x++;
        }
        e = x / m;
        p = 100 * (x / m);

        printf("%.3lf%\n", p);
        i++;
    }
    return 0;
}