#include<stdio.h>

#include<math.h>

int main() {
    long int t, n, x, i, j, k, l, a, c, d, e, b[100];
    scanf("%ld", & t);
    for (i = 1; i <= t; i++) {
        scanf("%ld", & n);
        x = 1;
        a = n;
        for (j = 1; x != 0; j++) {
            c = 1;
            e = 0;

            for (k = 0; c != 0; k++) {
                b[k] = a % 10;
                a = a / 10;
                c = a;
            }
            for (l = 0; l < k; l++) {
                d = pow(b[l], 2);
                e = e + d;

            }
            a = e;
            x = a / 10;
        }
        if (a == 1)
            printf("Case #%ld: %ld is a Happy number.\n", i, n);
        else
            printf("Case #%ld: %ld is an Unhappy number.\n", i, n);

    }
    return 0;
}