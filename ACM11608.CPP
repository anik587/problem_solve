#include<stdio.h>

#include<string.h>

int main() {
    int t, i, j, k, a[15], b[15], sum, x;

    x = 0;
    while (1) {

        scanf("%d", & t);
        if (t < 0)
            break;
        else {
            x++;
            sum = t;
            memset(a, 0, sizeof(a));
            memset(a, 0, sizeof(a));

            for (i = 1; i <= 12; i++)
                scanf("%d", & a[i]);
            for (j = 0; j < 12; j++)

                scanf("%d", & b[j]);
            printf("Case %d:\n", x);
            for (k = 0; k < 12; k++) {
                sum += a[k];

                if (sum >= b[k]) {
                    printf("No problem! :D\n");
                    sum = sum - b[k];
                } else
                    printf("No problem. :(\n");

            }

        }

    }

    return 0;
}