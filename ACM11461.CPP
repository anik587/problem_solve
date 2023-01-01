#include<stdio.h>

#include<math.h>

int main() {
    long int a, b, x, k, i;
    double y, z;
    while (1) {
        scanf("%ld%ld", & a, & b);
        k = 0;
        if ((a == 0) && (b == 0))
            break;
        else {
            for (i = a; i <= b; i++) {
                x = sqrt(i);
                y = sqrt(i);
                z = y - x;
                if (z == 0)
                    k = k + 1;

            }

            printf("%ld\n", k);
        }

    }
    return 0;

}