#include<stdio.h>

#include<string.h>

#include<math.h>

char b[30];
int a[1100];

int main() {
    long ind, i, sum, j, l, p, n, k;
    n = 1042;
    p = (int)(sqrt)(n);

    for (i = 4; i < n; i += 2)

        a[i] = 1;
    for (i = 3; i <= p; i += 2) {
        for (j = i * i; j <= n; j += i + i)

            a[j] = 1;

    }

    while (gets(b)) {
        sum = 0;
        l = strlen(b);
        for (i = 0; i < l; i++) {
            k = int(b[i]);
            if ((97 <= b[i]) && (b[i] <= 122))
                sum = sum + b[i] - 96;
            else
                sum = sum + b[i] - 38;
        }

        if (a[sum] == 0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
        memset(b, 0, sizeof(b));
    }
    return 0;
}