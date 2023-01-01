#include<stdio.h>

int main() {

  long long e, c, n, d;
  while (1) {
    scanf("%lld", & n);

    if (n < 0)
      break;
    else {
      d = n * (n + 1);
      e = d / 2;

      c = e + 1;
    }
    printf("%lld\n", c);
  }
  return 0;
}