#include<stdio.h>

int main() {
    long int a, b, x, i, j, p;

    scanf("%ld", & x);
    for (i = 1; i <= x; i++) {
        p = 0;
        scanf("%ld%ld", & a, & b);

        if (a < b)

        {
            for (j = a; j <= b; j++)

            {
                if (j % 2 != 0)
                    p = p + j;
            }

        } else

        {
            for (j = b; j <= a; j++)

            {
                if (j % 2 != 0)
                    p = p + j;
            }

        }

        printf("Case %ld: %ld\n", i, p);

    }

    return 0;

}