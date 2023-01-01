#include<stdio.h>

#include<string.h>

char b[10000000];
int main() {
  int i, j, l, l1;
  char a[50] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
  l1 = strlen(a);
  while (gets(b)) {
    l = strlen(b);
    for (i = 0; i < l; i++) {
      if (b[i] == ' ') {
        printf(" ");
        continue;
      }
      for (j = 0; j < l1; j++)
        if (b[i] == a[j])
          printf("%c", a[j - 1]);
    }
    printf("\n");
    memset(b, 0, sizeof(b));
  }
  return 0;
}