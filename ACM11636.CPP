#include<stdio.h>

int main() {
    long int c, i, j, z, n, a;

    j = 0;
    while (1) {
        p2: scanf("%ld", & n);
        i = 0;z = 1;
        j++;
        if (n == 1) {
            printf("Case %ld: 0\n", j);
            goto p2;
        }

        if (n < 0)
            break;
        else {
            p1: i++;
            a = z * 2;
            if (a >= n) {
                printf("Case %ld: %ld\n", j, i);
                goto p2;
            } else {
                z = a;
                goto p1;

            }
        }

    }
    return 0;
}