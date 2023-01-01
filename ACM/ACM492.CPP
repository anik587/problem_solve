#include<stdio.h>

int main() {
  char ch, y;
  int m, q, c;
  q = 1;
  m = 2;
  c = 0;
  while (scanf("%c", & ch) != EOF) {
    c++;
    if ((ch >= 65 && 90 >= ch) || (ch >= 97 && ch <= 122)) {
      if (q == 1) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
          printf("%c", ch);
          m = 1;
        } else {
          m = 0;
          y = ch;

        }
      } else
        printf("%c", ch);
      q = 0;
    }
    if ((ch >= 32 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126) || ch == '=') {
      if (m == 1)
        printf("ay%c", ch);
      else if (m == 0)
        printf("%cay%c", y, ch);
      else

        printf("%c", ch);
      q = 1;
      m = 2;

    }
    if (c == 2 && ch == '\n' && m == 1)
      printf("ay");
    if (ch == '\n') {
      printf("\n");
      c = 0;
      q = 1;
      m = 2;
    }
  }

  return 0;
}