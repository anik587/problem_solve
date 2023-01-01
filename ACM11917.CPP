#include<stdio.h>

#include<string.h>

char a[10000][130];
int x[10000];
char b[130];
int main() {
    int z, y, i, j, n, m, o, p;

    scanf("%d", & n);
    for (i = 1; i <= n; i++) {

        scanf("%d", & m);

        for (j = 0; j < m; j++) {
            scanf("%s%d", & a[j], & x[j]);

        }

        scanf("%d", & y);
        getchar();
        gets(b);
        for (j = 0; j < m; j++) {
            o = strcmp(a[j], b);
            if (o == 0) break;
        }

        if (o != 0)
            printf("Case %d: Do your own homework!\n", i);
        else if (x[j] <= y)
            printf("Case %d: Yesss\n", i);
        else if (x[j] <= y + 5)
            printf("Case %d: Late\n", i);
        else
            printf("Case %d: Do your own homework!\n", i);

        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(x, 0, sizeof(x));
    }
    return 0;
}