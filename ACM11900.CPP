#include<stdio.h>

int a[50];
int main() {
    int t, n, p, q, i, j, b, N;
    scanf("%d", & t);

    for (i = 1; i <= t; i++) {
        b = 0;
        N = 0;
        scanf("%d%d%d", & n, & p, & q);
        for (j = 1; j <= n; j++)
            scanf("%d", & a[j]);
        for (j = 1; j <= n; j++) {
            b += a[j];
            if (b > q || j > p) {
                N = j - 1;
                break;
            } else
                N = j;
        }

        printf("Case %d: %d\n", i, N);

    }
    return 0;
}