#include<stdio.h>

#include<math.h>

int main() {
  long int n, h[100], i, j, c, x, b, d, y;
  y = 0;
  while (1) {
    scanf("%ld", & n);

    if (n == 0)
      break;
    y++;
    c = 0;
    x = 0;
    for (i = 0; i < n; i++) {
      scanf("%ld", & h[i]);
      c = h[i] + c;
    }
    b = c / n;
    for (j = 0; j < n; j++) {
      d = h[j] - b;
      if (d > 0)
        x = x + d;
    }
    printf("Set #%ld\nThe minimum number of moves is %d.\n\n", y, x);

  }

  return 0;
}