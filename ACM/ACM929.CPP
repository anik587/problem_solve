#include<stdio.h>

#include<string.h>

long a[100][100];

int main() {
  long t, n, m, p, q, i, j, r;
  scanf("%ld", & t);
  while (t--) {
    p = 0;
    q = 0;
    r = 0;
    scanf("%ld%ld", & n, & m);
    for (i = 1; i <= n; i++)
      for (j = 1; j <= m; j++) {
        scanf("%ld", & a[i][j]);
        if (i == 1 || j == m)
          p += a[i][j];
        if (j == 1 || i == n)
          q += a[i][j];
        if (n >= m)
          if (i == j)
            r += a[i][j];

      }
    if (r == 0) {
      if (p >= q)
        printf("%ld\n", q);
      else if (p <= q)
        printf("%ld\n", p);

    } else {
      if (p >= q && q <= r)
        printf("%ld\n", q);
      else if (p <= q && p <= r)
        printf("%ld\n", p);
      else if (r <= p && r <= p)
        printf("%ld\n", r);
    }
    memset(a, 0, sizeof(a));

  }
  return 0;
}