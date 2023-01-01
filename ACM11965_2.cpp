#include<stdio.h>

#include<string.h>

char s[501];
int main() {

    long t, T, q, i, l;
    bool p, r;
    scanf("%ld", & T);
    getchar();
    q = 0;
    r = 0;
    while (T--) {
        scanf("%ld", & t);
        getchar();
        if (r != 0)
            printf("\n");
        r = 1;
        printf("Case %ld:\n", ++q);

        while (t--) {
            p = 0;
            gets(s);

            l = strlen(s);

            for (i = 0; i < l; i++) {
                if (s[i] != ' ') {
                    if (s[i - 1] == ' ')
                        printf(" %c", s[i]);

                    else {
                        printf("%c", s[i]);
                        p = 0;
                    }
                }
            }
            printf("\n");

            memset(s, 0, sizeof(s));
            //memset(s1,0,sizeof(s1));
        }
        //   printf("\n");

    }

    return 0;
}