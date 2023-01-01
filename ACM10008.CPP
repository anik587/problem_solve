#include<stdio.h>

#include<string.h>

char b[10000000];
long c[10000000], d[10000000];
int main() {
  long i, j, p, q, n, l1, l2, w;
  char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  scanf("%ld", & n);
  getchar();
  while (n--) {
    p = 0;
    l1 = strlen(a);
    gets(b);
    l2 = strlen(b);
    for (i = 0; i < l2; i++)
      if (b[i] > 96)
        b[i] = b[i] - 97 + 65;
    for (i = 0; i < l2; i++)
      for (j = 0; j < l1; j++)
        if (a[j] == b[i]) {
          c[j]++;
          break;
        }

    for (i = 0; i < l1; i++)
      if (c[i] != 0)
        d[p++] = c[i];
    for (i = 0; i < p; i++)
      for (j = i + 1; j < p; j++)
        if (d[i] <= d[j]) {
          q = d[i];
          d[i] = d[j];
          d[j] = q;
        }

  }

  for (i = 0; i < p; i++)
    for (j = 0; j < l1; j++)
      if (d[i] == c[j]) {
        printf("%c %ld\n", a[j], d[i]);
        c[j] = 0;
      }

  return 0;
}