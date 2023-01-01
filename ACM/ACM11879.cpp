#include<stdio.h>

#include<string.h>

char a[10000000];
int main() {
    long l, i, p;

    while (1) {
        gets(a);

        l = strlen(a);
        if (l == 1 && a[0] == '0')
            break;
        else {
            p = 0;

            for (i = 0; i < l; i++)
                p = ((p * 10) + a[i] - '0') % 17;

        }
        if (p == 0)
            printf("1\n");
        else
            printf("0\n");
        memset(a, 0, sizeof(a));
    }
    return 0;
}