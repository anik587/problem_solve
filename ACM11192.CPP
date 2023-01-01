#include<stdio.h>

#include<string.h>

char s[110];
int main() {
    int i, j, l, gro, next, num, p;

    while (1) {
        scanf("%d", & gro);
        if (gro == 0)
            break;
        getchar();
        gets(s);
        l = strlen(s);

        p = l / gro;
        num = p;
        next = 0;
        for (i = 0; i < gro; i++) {
            for (j = num - 1; j >= next; j--)
                printf("%c", s[j]);

            next = num;
            num += p;

        }

        printf("\n");
        memset(s, 0, sizeof(s));
    }

    return 0;
}