#include<stdio.h>

#include<string.h>

char a[1000];

int main() {
  long int l, i, p;
  while (gets(a)) {
    l = strlen(a);
    p = 0;
    for (i = 0; i <= l; i++) {
      if ((a[i] >= 32 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 126) || a[i] == '\n' || a[i] == '\0' || a[i] == '=')
        if ((a[i - 1] >= 65 && 90 >= a[i - 1]) || (a[i - 1] >= 97 && a[i - 1] <= 122))
          p++;
    }
    printf("%ld\n", p);

    memset(a, 0, sizeof(a));
  }
  return 0;
}