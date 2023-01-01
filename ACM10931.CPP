#include<stdio.h>

int main() {
    long long int a[10000], b, c, n, i, j, x;
    while (1) {
        scanf("%lld", & n);
        if (n == 0)
            break;
        c = n;
        x = 0;
        for (i = 0; c != 0; i++) {
            b = c % 2;
            a[i] = c % 2;
            c = c / 2;
            if (b == 1)
                x++;
        }

        printf("The parity of ");
        for (j = i - 1; j >= 0; j--)
            printf("%lld", a[j]);
        printf(" is %lld (mod 2).\n", x);
    }
    return 0;
}