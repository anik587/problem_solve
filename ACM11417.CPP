#include<stdio.h>

int main() {
    long int i, j, k, n, a, b, c, d;
    while (1) {
        d = 0;
        scanf("%ld", & n);
        if (n == 0)
            break;
        else {
            for (i = 1; i < n; i++)
                for (j = i + 1; j <= n; j++) {
                    c = 1;
                    a = i;
                    b = j;
                    for (k = 1; c != 0; k++) {
                        c = b % a;
                        b = a;
                        a = c;

                    }
                    d = d + b;
                }

        }
        printf("%ld\n", d);

    }

    return 0;
}