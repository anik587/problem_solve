#include<stdio.h>

int main() {
    int i, j, k, t, n, a[1000], x, y;
    scanf("%d", & t);

    for (i = 1; i <= t; i++) {

        x = 0;
        y = 0;
        scanf("%d", & n);
        for (j = 0; j < n; j++)
            scanf("%d", & a[j]);
        for (k = 0; k < n - 1; k++) {
            if (a[k] < a[k + 1])
                x++;

            if (a[k] > a[k + 1])
                y++;

        }

        printf("Case %d: %d %d\n", i, x, y);
    }

    return 0;
}