#include<stdio.h>

#include<math.h>

#include<string.h>

char a[1000];
int main() {
  while (1) {
    long int i, l, p, b;
    scanf("%s", a);
    l = strlen(a);
    if (a[0] == '0' && l == 1)
      break;
    else {
      p = 1;
      b = 0;
      for (i = l - 1; i >= 0; i--) {
        b = b + ((a[i] - 48) * (pow(2, p) - 1));
        p++;
      }

    }
    printf("%ld\n", b);
    memset(a, 0, sizeof(a));
  }

  return 0;
}