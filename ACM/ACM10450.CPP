#include<stdio.h>

int main() {
    long long int a, b, c, m, n, i, j;
    scanf("%lld", & n);
    i = 1;
    while (i <= n) {
        scanf("%lld", & m);
        j = 1;
        c = 0;
        a = 1;
        b = 1;
        while (j <= m) {
            c = a + b;
            a = b;
            b = c;
            j++;
        }
        printf("Scenario #%lld:\n%lld\n\n", i, c);

        i++;
    }
    return 0;
}