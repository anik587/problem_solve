#include<stdio.h>

int main() {
    long int n, k, p, t, a, i, j, b;
    scanf("%ld", & t);
    for (i = 1; i <= t; i++) {
        b = 0;
        scanf("%ld%ld%ld", & n, & k, & p);

        for (j = 1; j <= p; j++)
            k += 1;
        a = k % n;
        if (a == 0)
            b = b + n;
        else
            b = b + a;
        printf("Case %ld: %d\n", i, b);

    }
    return 0;
}