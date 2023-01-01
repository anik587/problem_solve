#include<stdio.h>

#include<math.h>

int main() {
  long int a, b, c, i, j, n;
  double p;
  while (scanf("%ld", & n) != EOF) {

    if (n <= 0 || n > 150) {
      c = 0;
      a = 0;
    } else {
      p = (2 * n - 1) / 2.0;
      a = (8 * n) - 4;
      b = 0;
      for (i = 1; i < p; i++)
        b = b + (int)(sqrt(pow(p, 2) - pow(i, 2)));

      c = 4 * b;
    }
    printf("In the case n = %ld, %ld cells contain segments of the circle.\n", n, a);
    printf("There are %ld cells completely contained in the circle.\n\n", c);

  }

  return 0;
}