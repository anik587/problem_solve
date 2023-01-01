#include<stdio.h>

#include<string.h>

char a[1000], b[1000], p[1000], q[1000];
int main() {
    int la, lb, i, j, k, l, m, x1, x2, n, o, s, t;
    double x, max1, max2;
    char u = '%';
    char p[] = "abcdefghijklmnopqrstuvwxyz";
    char q[] = "ABCDEFGHIJKLMNOPQRSTUVwXYZ";
    while (gets(a)) {
        gets(b);

        max1 = 0;
        max2 = 0;
        la = strlen(a);
        lb = strlen(b);
        for (i = 0; i < la; i++) {
            if (a[i] >= 'a' && a[i] <= 'z')
                for (j = 0; j < 26; j++) {
                    if (a[i] == p[j])

                    {
                        max1 = (j + 1) + max1;
                        break;
                    }

                }
            else
                for (j = 0; j < 26; j++) {
                    if (a[i] == q[j]) {
                        max1 = (j + 1) + max1;
                        break;
                    }
                }

        }

        for (k = 0; k < lb; k++) {
            if (b[k] >= 'a' && b[k] <= 'z')
                for (l = 0; l < 26; l++) {
                    if (b[k] == p[l]) {
                        max2 = (l + 1) + max2;
                        break;
                    }
                }
            else
                for (l = 0; l < 26; l++) {
                    if (b[k] == q[l]) {
                        max2 = (l + 1) + max2;
                        break;
                    }
                }

        }

        s = (int)(max1);
        t = (int)(max2);

        a1: x1 = 0;
        for (o = 0; s != 0; o++) {
            x1 += s % 10;
            s = s / 10;
        }
        if (x1 > 9) {
            s = x1;
            goto a1;
        }

        a2: x2 = 0;
        for (n = 0; t != 0; n++) {
            x2 += t % 10;
            t = t / 10;
        }
        if (x2 > 9) {
            t = x2;
            goto a2;
        }

        max1 = (double)(x1);
        max2 = (double)(x2);

        if (max1 >= max2)
            x = (max2 / max1);
        else
            x = (max1 / max2);
        x *= 100;
        printf("%.2lf %%\n", x, u);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

    }
    return 0;
}