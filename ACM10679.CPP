#include<stdio.h>

#include<string.h>

char s[100001], t[1001];
bool p;
int main() {

    long k, i, j, q, ls, lt;

    scanf("%ld", & k);
    getchar();
    while (k--)

    {
        gets(s);
        scanf("%ld", & q);
        ls = strlen(s);
        getchar();
        while (q--) {
            gets(t);
            i = 0;
            j = 0;
            lt = strlen(t);
            while (1) {
                if (t[i] == s[j]) {
                    i++;
                    p = 1;
                } else {
                    p = 0;
                    i = 0;
                }
                if (j == ls) break;
                if (i == lt && p == 1) break;
                j++;
            }

            if (p == 1)
                printf("y\n");
            else
                printf("n\n");
            memset(t, 0, sizeof(t));
        }

        memset(s, 0, sizeof(s));
    }

    return 0;
}