#include<stdio.h>

int main() {

    long int n, i, b;
    while (scanf("%ld", & n) != EOF) {

        b = 1;

        if (n < 0)

        {

            if (n * 1 % 2 == 0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");

        } else
        if (n < 8)
            printf("Underflow!\n");
        else if (n > 13)
            printf("Overflow!\n");
        else {
            for (i = 1; i <= n; i++)
                b = b * i;

            printf("%ld\n", b);
        }
    }

    return 0;
}