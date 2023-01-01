#include<stdio.h>

#include<string.h>

char a[1000];
int main() {
  long l, i, n;
  n = 0;
  while (gets(a)) {

    l = strlen(a);
    for (i = 0; i < l; i++) {
      if (a[i] == '"' && n == 0) {
        printf("``");
        n = 1;
      } else
      if (a[i] == '"' && n == 1) {
        printf("''");
        n = 0;
      } else
        printf("%c", a[i]);
    }
    printf("\n");
  }
  return 0;
}