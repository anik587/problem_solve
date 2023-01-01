#include<stdio.h>

#include<math.h>

double a[1001];
int main() {
  double i, n, total, p;
  while (1) {
    scanf("%lf", & n);
    total = 0;
    if (n == 0)
      break;
    else {
      for (i = 1; i <= n; i++) {
        scanf("%lf", & a[i]);
        total += a[i];

      }
      total = (total / n);
      for (i = 1; i <= n; i++) {
        if (a[i] >= total)
          a[i] = a[i] - total;
        else
          a[i] = total - a[i];
      }
      for (i = 1; i <= n; i++)
        if (p >= a[i])
          p = a[i];

      printf("%$.2lf\n", p);
    }

  }
  return 0;
}