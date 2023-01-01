#include<stdio.h>

int main() {
  int a, b, c, i, j, k, n, x;
  while (scanf("%d", & n) != EOF) {
    for (x = 1; x <= n; x++) {
      scanf("%d%d", & a, & b);

      for (i = 1; i <= b; i++) {
        for (j = 1; j <= a; j++) {
          for (k = 1; k <= j; k++)
            printf("%d", j);
          printf("\n");
        }
        for (j = a - 1; j >= 1; j--) {
          for (k = j; k >= 1; k--)

            printf("%d", j);
          printf("\n");
        }
        if (i == b && i == b);
        else
          printf("\n");

      }

    }

  }
  return 0;
}