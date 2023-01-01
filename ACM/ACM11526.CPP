#include<stdio.h>

long int i;
long long H(int n) {
    long long res = 0;
    for (i = 1; i <= n / 2; i = i + 1) {
        res = (res + n / i);
    }
    return res;

}

int main() {
    long long int p, n, j, k;
    scanf("%lld", & j);
    while (j > 0) {

        scanf("%d", & n);
        // if(n<0)
        //n=n*-1;
        p = H(n);
        k = n - i;
        p = p + k + 1;
        printf("%lld\n", p);
        j--;
    }
    return 0;
}