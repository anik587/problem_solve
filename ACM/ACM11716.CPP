#include<stdio.h>

#include<string.h>

#include<math.h>

char a[100000];
int main() {
    double i, j, n, o, l, k, p;
    int m;

    scanf("%lf", & i);
    getchar();
    while (i--) {
        gets(a);
        j = strlen(a);
        k = (int) sqrt(j);
        n = pow(k, 2);
        if (n != j)
            printf("INVALID\n");
        else {
            l = 0;
            p = 0;

            a1: for (m = l; m < j; m += k) {

                printf("%c", a[m]);
                p++;
            }
            if (p < j && m >= j) {
                l++;
                goto a1;
            }

            memset(a, 0, sizeof(a));
            printf("\n");
        }

    }

    return 0;
}