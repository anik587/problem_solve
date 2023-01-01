#include<stdio.h>

#include<string.h>

char b[100];
char c[100];

int main() {
    int i, j, b1, c1, p;
    scanf("%d", & i);
    getchar();
    while (i--) {
        scanf("%s", b);
        getchar();
        scanf("%s", c);
        getchar();
        b1 = strlen(b);
        c1 = strlen(c);
        if (b1 != c1) {
            p = 0;
            goto a1;
        } else
            for (j = 0; j < b1; j++) {
                if (b[j] != 'a' && b[j] != 'e' && b[j] != 'i' && b[j] != 'o' && b[j] != 'u') {
                    if (b[j] == c[j])
                        p = 2;
                    else
                        p = 0;
                    if (p == 0)
                        break;
                }
            }
        a1:
            if (p == 0)
                printf("No\n");
            else
                printf("Yes\n");
    }
    return 0;
}