#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include<math.h>

char a[20];
char b[20];
char c[20];
int main() {
    long i, sum, l, x, y, p, z, j;
    while (1) {
        a1: gets(a);
        z = strlen(a);
        if (z == 1 && a[0] == '0') {
            printf("0x0\n");
            goto a1;
        }
        sum = 0;
        if (a[0] == '-')
            break;
        else
        if (a[0] == '0' && a[1] == 'x') {

            strcpy(c, a + 2);
            l = strlen(c);
            p = 0;
            for (i = l - 1; i >= 0; i--) {

                if (c[i] == 'A' || c[i] == 'a')
                    x = 10;
                else if (c[i] == 'B' || c[i] == 'b')
                    x = 11;
                else if (c[i] == 'C' || c[i] == 'c')
                    x = 12;
                else if (c[i] == 'D' || c[i] == 'd')
                    x = 13;
                else if (c[i] == 'E' || c[i] == 'e')
                    x = 14;
                else if (c[i] == 'F' || c[i] == 'f')
                    x = 15;
                else
                    x = c[i] - '0';
                sum = (long)(sum + x * (pow(16, p)));
                p++;
            }
            printf("%ld\n", sum);
        } else {

            x = atol(a);
            for (i = 0; x != 0; i++) {
                y = x % 16;
                x = (long)(x / 16);
                if (y == 10)
                    b[i] = 'A';
                else if (y == 11)
                    b[i] = 'B';
                else if (y == 12)
                    b[i] = 'C';
                else if (y == 13)
                    b[i] = 'D';
                else if (y == 14)
                    b[i] = 'E';
                else if (y == 15)
                    b[i] = 'F';
                else
                    b[i] = y + '0';
            }
            printf("0x");
            for (j = i - 1; j >= 0; j--)
                printf("%c", b[j]);
            printf("\n");
        }

        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
    }
    return 0;
}