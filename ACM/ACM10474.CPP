#include<stdio.h>

int main() {
    int n, m, i, j, k, l, p, q, w, r, a[10000], b[10000], x;
    w = 0;
    while (1) {
        w++;

        scanf("%d%d", & n, & m);
        if (n == 0 && m == 0)
            break;
        else {
            i = 0;
            k = 0;

            while (i < n) {
                scanf("%d", & a[i]);
                i++;
            }
            for (j = 0; j < n - 1; j++)
                for (l = 0; l < n - 1 - j; l++)
                    if (a[l] >= a[l + 1]) {
                        p = a[l];
                        a[l] = a[l + 1];
                        a[l + 1] = p;
                    }

            while (k < m) {
                scanf("%d", & b[k]);
                k++;
            }
            printf("CASE# %d:\n", w);
            x = 0;
            while (x < m) {
                r = 0;
                for (q = 1; q <= n; q++)

                    if (b[x] == a[q - 1]) {
                        printf("%d found at %d\n", b[x], q);
                        r++;
                        break;

                    }
                if (r == 0)
                    printf("%d not found\n", b[x]);

                x++;

            }

        }

    }
    return 0;
}