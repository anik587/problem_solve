#include<stdio.h>

#include<math.h>

int main() {
  long long int n, m, i, j, k, a, b, c, x, y, o, p, q, e, d, s;
  scanf("%lld", & n);
  i = 1;
  while (i <= n) {
    scanf("%lld", & m);
    x = 0;
    p = m;
    q = m;
    for (j = 0; p != 0; j++) {
      a = p / 2;
      b = p % 2;
      if (b == 1)
        x++;
      else
        x = x;
      p = a;

    }
    e = 0;
    y = 0;
    for (k = 0; q != 0; k++) {
      c = q / 10;
      s = q % 10;
      d = s * pow(16, k);
      e = e + d;
      q = c;
    }
    for (o = 0; e != 0; o++) {
      a = e / 2;
      b = e % 2;
      if (b == 1)
        y++;
      else
        y = y;
      e = a;
    }

    printf("%lld %lld\n", x, y);
    i++;

  }
  return 0;
}