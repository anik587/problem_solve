#include<stdio.h>

#include<string.h>

int a[1000];
int main() {
  int n, m, i, j, p, q, r, c, d;

  scanf("%d", & n);
  while (0 < n--) {
    r = 32000;
    scanf("%d", & m);
    scanf("%d", & a[0]);
    p = a[0];
    q = a[0];
    for (i = 1; i < m; i++) {
      scanf("%d", & a[i]);
      if (p <= a[i])
        p = a[i];
      else
        q = a[i];
    }
    if (p == q)
      r = 0;
    c = (int)(p / 2) + 1;
    if (c == q)
      c = p;
    for (i = q; i <= c; i++) {
      d = 0;
      for (j = 0; j < m; j++)
        if (i >= a[j])
          d += i - a[j];
        else
          d += a[j] - i;
      if (d <= r)
        r = d;
    }
    printf("%d\n", r);
    memset(a, 0, sizeof(a));

  }

  return 0;
}