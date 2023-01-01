#include<stdio.h>

int main() {
    long int n, m, z, p, a, x, c, q;

    while (scanf("%ld", & n) != EOF) {
        if (n == 1)
            printf("1\n");
        else {
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
            if (q == c || x <= c)
                printf("%ld\n", n);
            else {
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