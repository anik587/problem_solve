#include<stdio.h>

int main() {
  int x;
  long int a, n1, n2, b, y, i;

  while (scanf("%ld %ld", & n1, & n2) == 2) {
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

        if (x < b)
          x = b;
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

    printf("%ld %ld %d\n", n1, n2, x);
  }
  return 0;
}