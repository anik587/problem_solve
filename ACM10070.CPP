#include<stdio.h>

#include<string.h>

char y[10000000];

int main() {
  int i, l, a, b, c, d, e, p;
  while (gets(y)) {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    p = 0;
    l = strlen(y);
    for (i = 0; i < l; i++) {
      a = ((a * 10) + y[i] - '0') % 4;
      b = ((b * 10) + y[i] - '0') % 100;
      c = ((c * 10) + y[i] - '0') % 400;
      d = ((d * 10) + y[i] - '0') % 55;
      e = ((e * 10) + y[i] - '0') % 15;
    }

    if ((a == 0 && b != 0) || c == 0) {
      p = 1;
      printf("This is leap year.\n");
      if (d == 0)
        printf("This is bulukulu festival year.\n");
    }

    if (e == 0) {
      p = 1;
      printf("This is huluculu festival year.\n");
    }

    if (p != 1)
      printf("This is an ordinary year.\n");

    printf("\n");
    memset(y, 0, sizeof(y));

  }
  return 0;
}