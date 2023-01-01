#include<stdio.h>

#include<string.h>

char a[200];
int main() {
    int t, i, j, l, sum;
    char b[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%d", & t);
    i = 1;
    getchar();
    while (i <= t) {

        gets(a);
        l = strlen(a);
        sum = 0;
        for (j = 0; j < l; j++) {
            if (a[j] == 32)
                sum += 1;
            else if (a[j] >= b[0] && a[j] <= b[2]) {
                if (a[j] == 'a')
                    sum += 1;
                else if (a[j] == 'b')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[3] && a[j] <= b[5]) {
                if (a[j] == 'd')
                    sum += 1;
                else if (a[j] == 'e')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[6] && a[j] <= b[8]) {
                if (a[j] == 'g')
                    sum += 1;
                else if (a[j] == 'h')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[9] && a[j] <= b[11]) {
                if (a[j] == 'j')
                    sum += 1;
                else if (a[j] == 'k')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[12] && a[j] <= b[14]) {
                if (a[j] == 'm')
                    sum += 1;
                else if (a[j] == 'n')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[15] && a[j] <= b[18]) {
                if (a[j] == 'p')
                    sum += 1;
                else if (a[j] == 'q')
                    sum += 2;
                else if (a[j] == 'r')
                    sum += 3;
                else
                    sum += 4;
            } else if (a[j] >= b[19] && a[j] <= b[21]) {
                if (a[j] == 't')
                    sum += 1;
                else if (a[j] == 'u')
                    sum += 2;
                else
                    sum += 3;
            } else if (a[j] >= b[22] && a[j] <= b[25]) {
                if (a[j] == 'w')
                    sum += 1;
                else if (a[j] == 'x')
                    sum += 2;
                else if (a[j] == 'y')
                    sum += 3;
                else
                    sum += 4;
            }
        }

        printf("Case #%d: %d\n", i, sum);

        i++;
        memset(a, 0, sizeof(a));
    }
    return 0;
}