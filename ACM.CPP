#include<stdio.h>

int main() {
  long long int a, b, c[100] = {
    0
  }, d[100] = {
    0
  }, p, cry, z, x, i, j, k, l;
  while (1) {
    cry = 0;
    z = 0;
    scanf("%lld%lld", & a, & b);
    if ((a == 0) && (b == 0))
      break;
    for (i = 0; a != 0; i++) {
      c[i] = a % 10;
      a = a / 10;

    }
    for (j = 0; b != 0; j++) {
      d[j] = b % 10;
      b = b / 10;
    }
    if (i > j)
      p = i;
    else
      p = j;
    if (i > j)
      for (l = j; l < i; l++)
        d[l] = 0;
    if (j > i)
      for (l = i; l < j; l++)
        c[l] = 0;
    for (k = 0; k < p; k++) {
      x = c[k] + d[k] + cry;
      if (x > 9) {
        z++;
        cry = 1;
      }
    }
    if (z == 0)
      printf("No carry operation.\n");
    else {
      if (z == 1)
        printf("1 carry operation.\n");
      else
        printf("%lld carry operations.\n", z);
    }

  }
  return 0;
}