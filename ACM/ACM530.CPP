#include<stdio.h>

int a, b, k, p;
int fact(int i) {

  if (i == k)
    a = i;
  if (i == p)
    b = i;
  i = i * fact(i - 1);
  return i;
}
int main() {
  long long int n, k, p, a, b, i, x, c;

  while (1) {
    scanf("%lld%lld", & n, & k);

    if (n == 0 && k == 0)
      break;
    else {

      p = n - k;
      fact(n);
      x = c / (a * b);
      printf("%lld\n", x);
    }
  }

  return 0;
}