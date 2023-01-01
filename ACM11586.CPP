#include<stdio.h>

#include<string.h>

char a[10000000];

int main() {
    int n, i, c, l, cnt1, cnt2;

    scanf("%d", & n);
    getchar();
    while (n--) {

        gets(a);
        c = 0;
        cnt1 = 0;
        cnt2 = 0;
        l = strlen(a);
        for (i = 0; i < l; i++) {

            {
                if (a[i] == 'M')
                    cnt1++;
                else if (a[i] == 'F')
                    cnt2++;
            }
        }
        if (i >= 3 && cnt1 == cnt2)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
        memset(a, 0, sizeof(a));
    }
    return 0;
}