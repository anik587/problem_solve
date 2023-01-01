#include<stdio.h>

int main() {
    int x[20][20], a, b, i, j, p, n;
    while (1) {
        scanf("%d", & n);
        if (n == 0)
            break;
        else {
            a = n;
            b = 1;
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    scanf("%d", & x[i][j]);
            for (i = a; i >= b; i--)
                for (j = b; j <= a; j++)
                    if (i == a || i == b || j == a || j == b)
                        p = p + x[i][j];
            printf("%d\n", p);

        }

    }
    return 0;
}