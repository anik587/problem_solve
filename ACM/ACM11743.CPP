#include<stdio.h>

#include<string.h>

char a[20];

int main() {
    int b, c, d, i, j, x, y, p, l;
    scanf("%d", & p);
    getchar();
    while (p--) {
        x = 0;
        gets(a);
        l = strlen(a);
        for (i = 0; i < l; i += 2) {
            if (a[i] == ' ') {
                i = i - 1;
                continue;
            }
            b = (a[i] - 48) * 2;
            c = b % 10;
            d = b / 10;
            if (c == a[i] * 2)
                x += c;
            else
                x = x + d + c;

        }

        b = 0;
        for (i = 1; i < l; i += 2) {

            if (i % 5 == 0)
                i = i + 1;

            b += a[i] - 48;
        }
        y = x + b;
        y = y % 10;

        if (y == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
        memset(a, 0, sizeof(a));
    }

    return 0;
}