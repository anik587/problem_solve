#include<stdio.h>

#include<string.h>

char a[1001], c[1001], q;
int p[1001], d[1001];

int main() {
  long l, i, j, w, ind, inc, z;
  z = 0;
  while (gets(a)) {
    long l, i, j, w, ind, inc;
    if (z != 0)
      printf("\n");
    l = strlen(a);
    for (i = 0; i < l; i++) {

      if (a[i] == 31);
      else {
        p[i] = 1;
        for (j = i + 1; j < l; j++)
          if (a[i] == a[j])

        {
          p[i]++;
          a[j] = 31;
        }

      }
    }
    inc = 0;
    ind = 0;
    for (i = 0; i < l; i++)
      if (a[i] != 31) {
        c[inc++] = a[i];
        d[ind++] = p[i];
      }
    l = strlen(c);
    for (i = 0; i < l; i++)
      for (j = i; j < l; j++)
        if (d[i] > d[j])

    {
      q = c[i];
      c[i] = c[j];
      c[j] = q;
      w = d[i];
      d[i] = d[j];
      d[j] = w;
    } else
    if (d[i] == d[j]) {
      if (c[i] < c[j]) {
        q = c[i];
        c[i] = c[j];
        c[j] = q;
        w = d[i];
        d[i] = d[j];
        d[j] = w;
      }

    }

    for (i = 0; i < l; i++)
      printf("%d %d\n", c[i], d[i]);
    z++;
    memset(a, 0, sizeof(a));
    memset(c, 0, sizeof(c));
    memset(p, 0, sizeof(p));
    memset(d, 0, sizeof(d));
  }
  return 0;
}