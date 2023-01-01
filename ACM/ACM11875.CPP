#include<stdio.h>

int main() {
    int a, i, j, t, n, m[10];
    scanf("%d", & t);
    for (i = 1; i <= t; i++) {
        scanf("%d", & n);
        for (j = 1; j <= n; j++)
            scanf("%d", & m[j]);

        a = j / 2;
        printf("Case %d: %d\n", i, m[a]);
    }

    return 0;

}