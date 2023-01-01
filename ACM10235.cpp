#include<stdio.h>

#include<math.h>

#include<string.h>

#define size 1000000
bool a[size];
char s[1000000], s1[1000000];
int main() {
    int p, i, j, num, b, b1, ind, l, g;
    p = (int)(sqrt)(size);

    for (i = 3; i <= p; i += 2)
        for (j = i * i; j <= size; j += i + i)

            a[j] = 1;

    while (gets(s)) {
        l = strlen(s);
        b = 0;
        ind = l - 1;
        for (i = 0; i < l; i++) {
            g = 1;
            for (j = i; j < ind; j++)
                g = g * 10;
            b = (int)(b + ((s[i] - '0') * g));
            //ind--;
        }

        if (b % 2 == 0 && b != 2)
            printf("%s is not prime.\n", s);
        else {
            if (a[b] == 1)
                printf("%s is not prime.\n", s);
            else {
                b1 = 0;
                ind = l - 1;
                for (i = l - 1; i >= 0; i--) {
                    g = 1;
                    for (j = i - 1; j >= 0; j--)
                        g = g * 10;
                    b1 = (int)(b1 + ((s[i] - '0') * g));
                    //     ind--;
                }
                if (b == b1)
                    printf("%s is prime.\n", s);
                else {
                    if (b1 % 2 == 0 && b1 != 2)
                        printf("%s is prime.\n", s);

                    else
                    if (a[b1] == 1)
                        printf("%s is prime.\n", s);
                    else
                        printf("%s is emirp.\n", s);
                }
            }
        }
    }

    return 0;
}