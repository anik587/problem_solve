#include<stdio.h>

#include<string.h>

int out[1000000];
int main() {
  long int a, b, i, quit, j;
  while (scanf("%ld%ld", & a, & b) != EOF) {
    if (b < 2 || a < b)
      printf("Boring!\n");

    else

    {
      j = 1;
      out[0] = a;

      for (i = 1; a > 1; i++) {
        if (a % b != 0) {
          quit = 1;
          break;
        }
        out[i] = a / b;
        a = out[i];
        j++;
      }
      if (quit == 1)
        printf("Boring!\n");
      else {
        printf("%d", out[0]);
        for (i = 1; i < j; i++)
          printf(" %d", out[i]);
        printf("\n");

      }
      quit = 0;
      memset(out, 0, sizeof(out));
    }
  }
  return 0;
}