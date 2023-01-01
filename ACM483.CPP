#include<stdio.h>

#include<string.h>

char a[10000000], s[10000000];
int main() {
  while (gets(s)) {
    long ne, l, i, l1, j;
    ne = 0;
    l = strlen(s);
    for (i = 0; i <= l; i++) {
      if (s[i] == ' ') {
        l1 = strlen(a);
        for (j = l1 - 1; j >= 0; j--)
          printf("%c", a[j]);
        printf("%c", s[i]);
        ne = 0;
        memset(a, 0, sizeof(a));
      } else
      if (s[i] == '\0') {
        l1 = strlen(a);
        for (j = l1 - 1; j >= 0; j--)
          printf("%c", a[j]);
        memset(a, 0, sizeof(a));
      } else
        a[ne++] = s[i];

    }

    ne = 0;
    printf("\n");
    memset(s, 0, sizeof(s));
  }
  return 0;
}