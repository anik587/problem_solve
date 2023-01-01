#include<stdio.h>

int main() {
    long int n, m, z, a, x, c, k, h, p, q;

    while (1) {
        scanf("%ld", & n);

        if (n == 0)
            break;
        if (n == 1)
            printf("0\n");
        else {
            h = n;
            z = n;
            a1:
                m = z % 3;
            c = 0;
            if (m != 0) {
                p = 3 - m;
                c = p;
                a = z + p;
            } else {
                p = 0;
                a = z + p;
            }
            x = a / 3;
            n = n + x;
            q = x - 1;
            if (q == c || x <= c) {
                k = n - h;
                printf("%ld\n", k);
            } else {
                if (c > 0)
                    z = x - c;
                else
                    z = x;
                goto a1;
            }

        }

    }

    return 0;

}