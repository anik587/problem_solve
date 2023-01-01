#include<stdio.h>

#include<string.h>

char a[1000], c[1000], e[1000];

int main() {

  long la, le, in, i, s, sum, p, z, q;

  q = 1;
  while (gets(a))

  {
    s = 0;
    in = 0;

    la = strlen(a);
    if (a[0] == '0' && la == 1)
      break;
    for (i = la - 1; i >= 0; i--)
      c[in ++] = a[i];
    if (q == 1)
      for (i = 0; i < la; i++)
        e[i] = '0';
    le = strlen(e);
    in = 0;
    sum = 0;
    q++;
    if (la > le) {
      p = la;
      for (i = le; i < la; i++)
        e[i] = '0';
    } else if (la < le) {
      p = le;
      for (i = la; i < le; i++)
        c[i] = '0';
    } else
      p = la;

    for (i = 0; i < p; i++) {
      sum = (c[i] - '0') + (e[i] - '0') + s;;
      if (sum > 9) {
        s = (int)(sum / 10);
        sum = sum % 10;
      } else
        s = 0;

      e[i] = sum + '0';
    }

    z = strlen(e);
    if (s == 1) {
      e[z] = s + '0';
      e[z + 1] = '\0';
    }

    memset(a, 0, sizeof(a));

    memset(c, 0, sizeof(c));
  }

  z = strlen(e);
  for (i = z - 1; i >= 0; i--)
    printf("%c", e[i]);
  printf("\n");
  s = 0;

  return 0;
}