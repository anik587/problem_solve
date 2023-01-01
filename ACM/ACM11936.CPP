#include<stdio.h>

#include<math.h>

int main() {
    int a, b, c, d, n, i;
    scanf("%d", & n);
    i = 0;
    while (i < n) {
        scanf("%d%d%d", & a, & b, & c);
        d = a + b;
        if (d > c)
            printf("OK\n");
        else
            printf("Wrong!!\n");
        i++;

    }

    return 0;
}