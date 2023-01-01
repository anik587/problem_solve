#include<stdio.h>

#include<string.h>

#include<math.h>

char b[1000];
char p[1000];

int main() {
  long int m, x, y, rem1, rem2, q, i;
  while (gets(b)) {
    gets(p);
    scanf("%ld", & m);
    getchar();
    x = strlen(b);
    y = strlen(p);
    rem1 = rem2 = 0;
    for (i = 0; i < x; i++)
      rem1 = ((rem1 * 10) + b[i] - '0') % m;

    for (i = 0; i < y; i++)
      rem2 = ((rem2 * 10) + p[i] - '0') % m;
    q = (rem1 * rem2);
    q = q % m;
    printf("%ld\n", q);

    memset(b, 0, sizeof(b));
    memset(p, 0, sizeof(p));

  }
  return 0;
}