#include<stdio.h>

#include<string.h>

char a[1000000];
int main() {
    memset(a, 0, sizeof(a));
    while (1) {
        long long int b, c, sum, i;
        gets(a);
        b = strlen(a);
        if (b == 1 && a[0] == '0')
            break;
        else {
            sum = 0;
            for (i = 0; i < b; i++) {
                sum = (sum * 10 + (a[i] - '0')) % 11;
                printf("%c", a[i]);
            }
            if (sum == 0)
                printf(" is a multiple of 11.\n");
            else
                printf(" is not a multiple of 11.\n");
        }

    }
    return 0;
}