#include<stdio.h>

int main() {
  int a, b, c, i, n;
  while (1) {
    scanf("%d", & n);
    if (n == 0)
      break;
    a = 0;
    b = 1;
    for (i = 1; i <= n; i++) {
      c = a + b;

      a = b;
      b = c;

    }
    printf("%d\n", c);

  }
  return 0;
}