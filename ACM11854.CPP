#include<stdio.h>

#include<math.h>

int main() {
    long int n[10], i, j, k, d, a, b, c;

    while (1) {
        for (i = 0; i <= 2; i++)
            scanf("%ld", & n[i]);
        if ((n[0] == 0) && (n[1] == 0) && (n[2] == 0))
            break;
        else {
            b = 3 - 1;
            for (j = 0; j < b; j++) {
                for (k = 0; k < b - j; k++) {
                    if (n[k] > n[k + 1]) {
                        a = n[k];
                        n[k] = n[k + 1];
                        n[k + 1] = a;

                    }
                }

            }

            d = pow(n[0], 2) + pow(n[1], 2);
            c = pow(n[2], 2);

            if (d == c)
                printf("right\n");
            else
                printf("wrong\n");
        }

    }

    return 0;

}