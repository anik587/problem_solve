#include<stdio.h>

int main() {
    long int a, b, c, d, i, j;

    while (scanf("%ld", & a) != EOF) {
        if (a == 0)
            break;
        c = 1;
        if (a / 10 == 0)
            printf("%ld\n", a);
        else {
            for (i = 1; c != 0; i++) {
                d = 0;

                for (j = 1; a != 0; j++) {
                    b = a % 10;
                    a = a / 10;
                    d = d + b;

                }

                a = d;
                c = a / 10;

            }

            printf("%ld\n", a);

        }

    }

    return 0;

}