#include<stdio.h>

#include<string.h>

char a[1000], s[1000];

int main() {
  long i, l, p, nem, t;
  scanf("%ld", & t);
  getchar();
  while (0 < t--) {
    gets(a);

    nem = 0;
    p = 1;
    l = strlen(a);
    for (i = 0; i < l; i++) {
      if (a[i] == '(' || a[i] == '[') {
        s[nem++] = a[i];
        p = 0;
      } else
      if (a[i] == ')' || a[i] == ']') {
        if (a[i] == ')') {
          if (s[nem - 1] == '(') {
            s[nem - 1] = '\0';
            nem--;
            p = 1;
          } else {
            p = 0;
            break;
          }
        } else {
          if (s[nem - 1] == '[') {
            s[nem - 1] = '\0';
            nem--;
            p = 1;
          } else {
            p = 0;
            break;
          }
        }
      }

    }
    if (p == 0)
      printf("No\n");
    else
      printf("Yes\n");
    memset(a, 0, sizeof(a));
    memset(s, 0, sizeof(s));
  }

  return 0;
}