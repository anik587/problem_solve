#include<stdio.h>

int main() {
    long long int n, i, a, b;
    while (scanf("%lld", & n) != EOF) {
        b = 0;
        for (i = 1; i <= n; i++) {
            a = i * i * i;
            b = b + a;

        }

        printf("%lld\n", b);

    }
    return 0;
}