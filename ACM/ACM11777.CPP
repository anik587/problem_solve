#include<stdio.h>

int main() {
    int i, t1, t2, f, At, ct1, ct2, ct3, ct, m, c, d, p;
    scanf("%d", & p);
    for (i = 1; i <= p; i++)

    {
        d = 0;
        scanf("%d%d%d%d%d%d%d", & t1, & t2, & f, & At, & ct1, & ct2, & ct3);
        if (ct1 < ct2) {
            d = ct1;
            ct1 = ct2;
            ct2 = d;
        }
        if (ct2 < ct3) {
            d = ct3;
            ct2 = ct3;
            ct3 = d;
        }
        c = ct1 + ct2;
        ct = c / 2;

        m = t1 + t2 + f + At + ct;
        if (m >= 90)
            printf("Case %d: A\n", i);
        else
        if (m >= 80)
            printf("Case %d: B\n", i);
        else
        if (m >= 70)
            printf("Case %d: C\n", i);
        else
        if (m >= 60)
            printf("Case %d: D\n", i);
        else

            printf("Case %d: F\n", i);
    }

    return 0;
}