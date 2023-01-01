#include<stdio.h>

int main() {

  long int a, n1, n2, b, y, i, p, x;

  while (1) {
    scanf("%ld %ld", & n1, & n2);

    if (n1 == 0 && n2 == 0)
      break;
    x = 0;
    if (n1 < n2) {
      for (i = n1; i <= n2; i++) {
        a = i;

        for (b = 1; a > 1; b++) {

          if (a % 2 != 0) {
            a = a * 3 + 1;

          } else {

            a = a / 2;

          }

        }

        if (x < b) {
          x = b;
          p = i;
        }
      }
    } else {
      for (i = n2; i <= n1; i++) {
        a = i;

        for (b = 1; a > 1; b++) {

          if (a % 2 != 0) {
            a = a * 3 + 1;

          } else {

            a = a / 2;

          }

        }

        if (x < b)
          x = b;
      }
    }
    x = x - 1;
    printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", n1, n2, p, x);
  }
  return 0;
}