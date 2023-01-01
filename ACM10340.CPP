#include<stdio.h>

#include<string.h>

char a[10000000], b[10000000];
int main() {
    char c, x, y;
    int i, j, la, lb, d, z;
    while (scanf("%s%s", & a, & b) != EOF) {
        la = strlen(a);
        lb = strlen(b);
        z = 0;
        for (i = 0; i < la; i++) {
            for (j = z; j < lb; j++) {
                z++;
                if (a[i] == b[j]) {
                    d = 1;
                    break;

                } else
                    d = 0;
            }
            if (d == 0)
                break;

        }
        if (d == 0)
            printf("No\n");
        else
            printf("Yes\n");
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

    }
    return 0;
}