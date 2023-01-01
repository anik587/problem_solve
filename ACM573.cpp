#include<stdio.h>


int main() {
  double i, H, U, D, F, d, p, q, A;
  while (1) {

    scanf("%lf%lf%lf%lf", & H, & U, & D, & F);
    A = (U * F / 100.0);

    d = 0;
    p = 0;
    q = 0;
    if (H == 0 && U == 0 && D == 0 && F == 0)
      break;
    else {
      for (i = 1; p <= H; i++) {
        if (i != 1) {
          U = U - A;
        }

        if (U > 0)
          p = d + U;
        else
          p = d;
        d = p - D;
        if (d < 0) {
          q = 1;
          break;
        }

      }

    }

    if (q == 0)
      printf("success on day %.0lf\n", i - 1);

    else
      printf("failure on day %.0lf\n", i);
  }
  return 0;
}