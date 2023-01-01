#include<stdio.h>

#include<string.h>

char a[210], b[210], e[210], f[210];

int main() {
  long i, la, lb, ind, p, t, sum, s, le, q;

  scanf("%ld", & t);
  getchar();
  while (0 < t--) {
    sum = 0;
    s = 0;
    scanf("%s", & a);
    getchar();
    scanf("%s", & b);
    getchar();
    la = strlen(a);
    lb = strlen(b);
    ind = 0;

    if (la > lb)
      for (i = lb; i < la; i++) {
        b[i] = '0';
        p = la;
      }
    else if (lb > la)
      for (i = la; i < lb; i++) {
        a[i] = '0';
        p = lb;
      }
    else
      p = la;

    for (i = 0; i < p; i++) {
      sum = a[i] - '0' + b[i] - '0' + s;
      if (sum > 9) {
        s = (int)(sum / 10);
        sum = sum % 10;
      } else s = 0;
      e[i] = sum + '0';

    }
    if (s == 1) {
      e[i] = s + '0';
      e[i + 1] = '\0';
    }

    ind = 0;
    q = 0;
    le = strlen(e);
    for (i = 0; i < le; i++)
      if (e[i] == '0' && q == 0);

      else {
        f[ind++] = e[i];
        q++;
      }
    printf("%s\n", f);
    memset(e, 0, sizeof(e));
    memset(f, 0, sizeof(f));
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

  }
  return 0;
}