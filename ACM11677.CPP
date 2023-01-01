#include<stdio.h>

int main() {
    int a, b, c, d, h1, h2, h3, h4, m1, m2, m3, m4, t;
    while (1) {
        scanf("%d%d%d%d", & a, & b, & c, & d);
        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;
        else {
            if (a > c) {
                h1 = a * 15;
                h2 = c * 15;
                h3 = h1 - h2;
                h4 = (360 - h3) / 15;
                if (b > d)
                    h4 = h4 - 1;
                else
                    h4 = h4;
            } else {
                if (a == c) {
                    if (b > d)
                        h4 = 23;
                    else
                        h4 = 0;
                } else {
                    h1 = a * 15;
                    h2 = c * 15;
                    h3 = (h2 - h1);
                    h4 = h3 / 15;

                    if (b > d)
                        h4 = h4 - 1;
                    else
                        h4 = h4;

                }

            }

            if (b > d) {
                m1 = b * 6;
                m2 = d * 6;
                m3 = m1 - m2;
                m4 = (360 - m3) / 6;

            } else {
                m1 = b * 6;
                m2 = d * 6;
                m3 = m2 - m1;
                m4 = (m3) / 6;
            }

            t = h4 * 60 + m4;
        }

        printf("%d\n", t);
    }

    return 0;
}