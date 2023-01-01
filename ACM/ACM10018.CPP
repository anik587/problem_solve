#include<stdio.h>

#include<math.h>

int main() {
  int n, i, j, k, z, p, l;
  long int a, b[100], c, x, y;
  scanf("%d", & n);

  for (i = 0; i < n; i++) {
    scanf("%ld", & a);
    z = 0;
    for (l = 0; l < 1000; l++) {
      c = 0;
      x = a;
      for (j = 0; a != 0; j++) {
        b[j] = a % 10;
        a = a / 10;
      }
      p = j - 1;
      for (k = 0; k <= p; k++)
        c = b[k] * pow(10, (p - k)) + c;
      if (x == c) {
        break;
      } else {
        y = x + c;
        z++;
        a = y;
      }
    }
    printf("%d %ld\n", z, y);
  }

  return 0;
}