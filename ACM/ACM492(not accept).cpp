#include<stdio.h>

#include<string.h>

char a[10000000];
char y;

int main() {
  long int l, i, m;
  while (gets(a)) {
    m = 2;
    l = strlen(a);
    if ((a[0] >= 65 && 90 >= a[0]) || (a[0] >= 97 && a[0] <= 122))
      if (a[0] == 'a' || a[0] == 'A' || a[0] == 'e' || a[0] == 'E' || a[0] == 'i' || a[0] == 'I' || a[0] == 'o' || a[0] == 'O' || a[0] == 'u' || a[0] == 'U')
        m = 0;
      else {
        m = 1;
        y = a[0];
      }
    for (i = 0; i <= l; i++) {
      if (m == 2)
        printf("%c", a[i]);
      if ((a[i] >= 32 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 126) || a[i] == '\n' || a[i] == '\0') {
        if (m == 0)
          printf("ay%c", a[i]);
        else
        if (m == 1)
          printf("%cay%c", y, a[i]);

        m = 2;

        if ((a[i + 1] >= 65 && 90 >= a[i + 1]) || (a[i + 1] >= 97 && a[i + 1] <= 122))
          if (a[i + 1] == 'a' || a[i + 1] == 'A' || a[i + 1] == 'e' || a[i + 1] == 'E' || a[i + 1] == 'i' || a[i + 1] == 'I' || a[i + 1] == 'o' || a[i + 1] == 'O' || a[i + 1] == 'u' || a[i + 1] == 'U')
            m = 0;
          else {
            m = 1;
            y = a[i + 1];

          }

        continue;
      }

      if ((a[i + 1] >= 65 && 90 >= a[i + 1]) || (a[i + 1] >= 97 && a[i + 1] <= 122) && m == 1)
        printf("%c", a[i + 1]);
      else
      if ((a[i] >= 65 && 90 >= a[i]) || (a[i] >= 97 && a[i] <= 122) && m == 0)
        printf("%c", a[i]);

    }

    printf("\n");

    memset(a, 0, sizeof(a));
  }
  return 0;
}