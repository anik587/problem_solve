#include<stdio.h>

int main() {

    long long int a, b, c, d, e, i, n, f;
    i = 1;
    scanf("%lld", & n);
    while (i <= n) {
        scanf("%lld%lld", & a, & b);

        c = a + b;

        d = c / 2;
        f = c % 2;
        if (f != 0) {
            printf("impossible\n");
            goto a1;
        }
        e = d - b;
        if (e < 0)
            printf("impossible\n");
        else
            printf("%lld %lld\n", d, e);

        a1:
            i++;

    }

    return 0;
}