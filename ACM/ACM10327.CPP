#include<stdio.h>

int main() {
    long int a[1000];
    int n, i, j, k, b, c, x;
    while (scanf("%d", & n) != EOF) {
        x = 0;
        for (i = 0; i < n; i++)
            scanf("%ld", & a[i]);
        b = n - 1;
        for (j = 0; j < b; j++) {
            for (k = 0; k < b - j; k++)
                if (a[k] > a[k + 1]) {
                    c = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = c;
                    x++;
                }

        }

        printf("Minimum exchange operations : %d\n", x);

    }
    return 0;
}