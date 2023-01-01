#include<stdio.h>

int main() {

    long int n, a, p;

    while (1) {
        scanf("%ld", & n);
        if (n == 0)
            break;
        else {
            if (n >= 101) {
                p = n;
                s1: p = p - 10;
                printf("f91(%ld) = %ld\n", n, p);
            } else {
                a = n;
                s2: a = a + 11;
                if (a >= 101) {
                    p = a;
                    p = a - 10;
                    if (p >= 101)
                        goto s1;
                    else
                        a = p;
                    goto s2;

                } else
                    goto s2;

            }
        }
    }
    return 0;
}