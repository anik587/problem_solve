#include<stdio.h>

#include<math.h>

int main() {
    long long int a, b, c[100] = {
        0
    }, d[100] = {
        0
    }, x[100] = {
        0
    }, m, i, j, y;

    while (scanf("%lld%lld", & a, & b) != EOF) {
        m = 0;
        for (i = 0;; i++) {

            if (a == 0 && b == 0)
                break;
            c[i] = a % 2;
            d[i] = b % 2;
            a = a / 2;
            b = b / 2;
            y = c[i] + d[i];
            if (y > 1)
                y = y - 2;
            else
                x[i] = y;
        }
        for (j = i - 1; j >= 0; j--) {
            m = m + x[j] * pow(2, j);

        }
        printf("%lld\n", m);
    }
    return 0;
}