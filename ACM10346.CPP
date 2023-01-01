#include<stdio.h>

int main() {
    long long int n, k, x, y, z, a, p;
    while (scanf("%lld%lld", & n, & k) != EOF) {
        a = n;
        p = n;
        while (a >= k) {
            x = a / k;
            p = p + x;
            y = a % k;
            a = x + y;

        }
        printf("%lld\n", p);

    }
    return 0;
}