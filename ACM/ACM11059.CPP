#include<stdio.h>

#include<string.h>

int a[100];

int main() {
    int i, j, k, p, n;
    k = 0;
    while (scanf("%d", & n) != EOF) {
        j = 0;
        p = 0;
        k++;
        for (i = 1; i <= n; i++) {
            scanf("%d", & a[i]);
            if (j != 0) {
                if (a[i] <= -1)
                    a[i] = a[i] * -1;
                if (a[i] != 0)
                    p = p * a[i];
            } else {
                if (a[i] <= -1)
                    a[i] = a[i] * -1;
                if (a[i] != 0)
                    p = p + a[i];
                j = 1;
            }

        }
        printf("Case #%d: The maximum product is %d.\n\n", k, p);
        memset(a, 0, sizeof(a));

    }

    return 0;
}