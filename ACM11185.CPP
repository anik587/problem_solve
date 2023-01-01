#include<stdio.h>

int main()

{
    long int a, b[1000], c, i, j;
    while (scanf("%ld", & a) != EOF) {
        if (a < 0)
            break;
        else
        if (a == 0)
            printf("0\n");
        else {
            for (i = 0; a != 0; i++) {
                c = a / 3;
                b[i] = a % 3;
                a = c;

            }

            for (j = i - 1; j >= 0; j--)

                printf("%ld", b[j]);
            printf("\n");

        }

    }

    return 0;
}