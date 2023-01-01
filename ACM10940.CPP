#include<stdio.h>

#include<math.h>


int main() {
    long long int n, i, p, j, k, b;
    double l;
    while (1) {
        scanf("%lld", & n);
        if (n == 0)
            break;

        else {
            p = 2;
            for (i = 1; p <= n; i++)
                p = p * 2;
            j = p - n;
            k = 2 * j;
            b = p - k;
        }
        if (b == 0)
            b = n;
        if (n == 1)
            b = 1;
        if (n == 2)
            b = 2;
        printf("%lld\n", b);
    }
    return 0;
}