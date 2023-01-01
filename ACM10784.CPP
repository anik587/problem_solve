#include<stdio.h>

#include<math.h>

int main() {
    long long int p, i, e;
    double d, n, m, f;
    i = 1;
    while (1) {
        scanf("%lf", & n);
        if (n == 0)
            break;
        else {
            m = ((3 + (sqrt(9 + 4 * 2 * n))) / 2.0);

            d = m;
            e = long(m);
            f = d - double(e);
            if (f == 0.0)
                p = long(m);
            else
                p = long(m) + 1;
            printf("Case %lld: %lld\n", i, p);

        }
        i++;
    }
    return 0;
}