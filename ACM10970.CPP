#include<stdio.h>

int main() {
    long int a, b, n, m;
    while (scanf("%ld%ld", & n, & m) != EOF) {
        a = m * n;
        b = a - 1;
        printf("%ld\n", b);

    }
    return 0;
}