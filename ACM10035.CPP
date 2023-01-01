#include<stdio.h>

int main() {
  long long int a, b, c, d, a1, b1, i, x, e, f, y, z;
  while (1) {
    scanf("%lld%lld", & a1, & b1);
    if (a1 < b1) {
      a = b1;
      b = a1;
    } else {
      a = a1;
      b = b1;
    }
    y = 0;
    z = 0;
    if (a == 0 && b == 0)
      break;
    else {
      for (i = 0;; i++) {
        c = a % 10;
        d = b % 10;
        e = a / 10;
        f = b / 10;
        x = c + d + z;
        if (x >= 10) {
          y++;
          a = e;
          b = f;
          z = 1;
        } else {
          a = e;
          b = f;
          z = 0;
        }

        if (a == 0 && b == 0)
          goto a1;
      }

    }
    a1:
      if (y == 0)
        printf("No carry operation.\n");
      else {
        if (y == 1)
          printf("1 carry operation.\n");
        else
          printf("%lld carry operations.\n", y);
      }
  }
  return 0;
}