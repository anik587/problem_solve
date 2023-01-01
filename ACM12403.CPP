#include<stdio.h>

#include<string.h>

char a[10];
char b[10] = "donate";
char c[10] = "report";
int main() {
    long int i, o, z, n;
    z = 0;
    scanf("%ld", & i);
    while (i--) {
        scanf("%s", a);
        o = strcmp(a, b);
        getchar();
        if (o == 0) {
            scanf("%ld", & n);
            getchar();
            z += n;
        } else
            printf("%ld\n", z);

    }

    return 0;
}