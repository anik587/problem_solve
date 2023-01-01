#include<stdio.h>

int main() {
    int n, a[100] = {
        0
    }, i, j, k, p;
    i = 1;
    j = 0;
    scanf("%d", & n);
    printf("Lumberjacks:\n");
    while (i <= n) {
        while (j < 10) {
            scanf("%d", & a[j]);

            j++;
        }
        p = 0;

        if (a[0] <= a[1]) {
            for (k = 0; k < 10 - 1; k++) {
                if (a[k] <= a[k + 1]) {
                    p++;
                    continue;

                } else {
                    break;
                }
            }
        } else {
            for (k = 0; k < 10 - 1; k++) {

                if (a[k] >= a[k + 1]) {
                    p++;
                    continue;

                } else {
                    break;

                }
            }
        }
        if (p + 1 == 10)
            printf("Ordered\n");
        else
            printf("Unordered\n");
        i++;
        j = 0;
        p = 0;
    }
    return 0;
}