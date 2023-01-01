#include<stdio.h>

#include<string.h>

#include<stdlib.h>

char a[1000];
char x[1000];
int main() {
    long int t, b, c, i, j, k, l, y, p, d, m, z;
    memset(a, 0, sizeof(a));
    memset(x, 0, sizeof(x));
    scanf("%lu", & t);
    getchar();
    for (i = 1; i <= t; i++) {
        gets(a);
        l = strlen(a);
        p = 1;
        c = 1;
        for (j = 0; j < l; j++) {
            d = 1;
            b = 1;
            x[j] = a[j];
            for (m = 0; m <= j; m++)
                if (a[j] == x[m] && m != j)
                    goto a1;
            for (k = 0; k < l; k++)

                if (a[j] == a[k] && j != k) {
                    b = b + 1;
                    d = d * b;
                }
            a1: c = c * (j + 1);
            p = p * d;
        }

        z = c / p;
        printf("Data set %ld: %ld\n", i, z);
    }
    return 0;
}