#include<stdio.h>

int main() {
    int x[20][20] = {
        0
    }, a, b, i, j, p, n, k, q, z;
    k = 1;
    while (1) {
        scanf("%d", & n);
        if (n == 0)
            break;
        else {
            a = n;
            b = 1;
            z = 0;
            q = n % 2;
            if (q == 0)
                q = n / 2;
            else
                q = n / 2 + 1;
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    scanf("%d", & x[i][j]);
            printf("Case %d:", k);
            while (a > 0 && z < q) {
                p = 0;
                for (i = a; i >= b; i--)
                    for (j = b; j <= a; j++)
                        if (i == a || i == b || j == a || j == b)
                            p = p + x[i][j];
                printf(" %d", p);
                a = a - 1;
                b = b + 1;
                z++;
            }
            printf("\n");
        }

        k++;
    }
    return 0;
}