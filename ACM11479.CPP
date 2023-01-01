#include<stdio.h>

int main() {
    long int a, b, c, t, i, p;
    scanf("%ld", & t);
    for (i = 1; i <= t; i++) {
        scanf("%ld%ld%ld", & a, & b, & c);
        if (a > b) {
            p = a;
            a = b;
            b = p;

        }
        if (b > c) {
            p = b;
            b = c;
            c = p;
        }
        if (a > b) {
            p = a;
            a = b;
            b = p;
        }
        if ((a + b < c) || (a + b == c))
            printf("Case %ld: Invalid\n", i);
        else {
            if ((a == b) && (a == c))
                printf("Case %ld: Equilateral\n", i);
            else {

                if ((a == b) || (b == c) || (c == a))
                    printf("Case %ld: Isosceles\n", i);

                else
                if ((a != b) || (b != c) || (c != a))
                    printf("Case %ld: Scalene\n", i);
            }

        }

    }
    return 0;
}