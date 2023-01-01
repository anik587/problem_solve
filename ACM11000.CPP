#include<stdio.h>

int main() {
    long int a, b, c, d, e, f, x, y, p, n, i, z;
    while (1) {
        scanf("%ld", & n);
        if (n == -1)
            break;
        p = 1;
        d = 0;
        b = 0;
        a = 1;
        if (n == 0)
            printf("0 1\n");
        else {
            for (i = 0; i < n; i++) {
                x = a;
                c = a * 2;
                f = b * 1;
                z = c / 2;
                d = z + p + f;
                e = z;
                a = d;
                b = e;
                y = d;
            }

            printf("%ld %ld\n", x, y);

        }
    }

    return 0;
}