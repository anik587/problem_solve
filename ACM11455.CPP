#include<stdio.h>

int main() {
    long long int a[10] = {
        0
    }, b, c, x, i, j, t;
    i = 1;
    scanf("%lld", & t);
    while (i <= t) {
        j = 0;
        b = 0;
        while (j < 4) {
            scanf("%lld", & a[j]);
            if (b <= a[j])
                b = a[j];
            else {
                c = a[j - 1];
                a[j - 1] = a[j];
                a[j] = c;

                b = a[j];
            }

            j++;

        }

        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
            printf("square\n");
        else {
            if (a[1] == a[0] && a[3] == a[2])
                printf("rectangle\n");
            else {
                if (a[1] == a[3] && a[0] == a[2])
                    printf("rectangle\n");
                else
                if (a[0] == a[3] && a[1] == a[2])
                    printf("rectangle\n");
                else {
                    x = a[0] + a[1] + a[2];
                    if (x > a[3])
                        printf("quadrangle\n");

                    else
                        printf("banana\n");
                }
            }
        }

        i++;

    }
    return 0;
}