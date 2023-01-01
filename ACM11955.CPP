#include<stdio.h>

#include<string.h>

#include<stdlib.h>

char s[200], s1[200], s2[200], * ptr, m[5];
long int a[100], b[100];

int main() {
    long int t, z, l, i, h, g, n, j, p, l1;

    scanf("%ld", & t);
    getchar();
    z = 1;
    while (z <= t) {

        gets(s);
        l1 = strlen(s);
        ptr = strtok(s, "+");
        sprintf(s1, "%s", ptr);
        ptr = strtok(NULL, ")");
        sprintf(s2, "%s", ptr);
        ptr = strtok(NULL, "\0");
        sprintf(m, "%s", ptr);
        l = strlen(s1);
        for (i = 0; i < l; i++)
            s1[i] = s1[i + 1];
        l = strlen(m);
        if (l == 2)
            n = m[l - 1] - '0';
        else
            n = (m[1] - '0') * 10 + m[2] - '0';
        printf("Case %d: ", z);
        h = n - 1;
        g = 1;

        if (n == 1)
            printf("%s+%s", s1, s2);
        else if (n == 2)
            printf("%s^2+2*%s*%s+%s^2", s1, s1, s2, s2);
        else {

            for (i = 1; i <= n + 1; i++) {
                for (j = 1; j <= i; j++) {
                    if (j == 1 || j == i) {
                        a[j] = 1;
                        b[j] = 1;
                    } else {

                        p = a[j - 1] + a[j];
                        b[j] = p;
                    }

                }
                p = 0;

                for (j = 1; j <= i; j++)
                    a[j] = b[j];

            }
            printf("%s^%ld", s1, n);
            for (j = 2; j <= n; j++) {
                if (g == 1)
                    printf("+%ld*%s^%ld*%s", a[j], s1, h, s2);
                else if (h == 1)
                    printf("+%ld*%s*%s^%ld", a[j], s1, s2, g);
                else
                    printf("+%ld*%s^%ld*%s^%ld", a[j], s1, h, s2, g);
                h--;
                g++;
            }
            printf("+%s^%ld", s2, n);

        }
        printf("\n");
        z++;
        memset(b, 0, sizeof(b));
    }
    return 0;
}