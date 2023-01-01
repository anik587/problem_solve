#include<stdio.h>

int main() {
  long n, a, i, p, sum, q;
  q = 0;
  while (1) {

    scanf("%ld", & n);
    if (q == 0)
      printf("PERFECTION OUTPUT\n");

    if (n <= 0) {
      printf("END OF OUTPUT\n");
      break;
    } else {
      sum = 1;
      if (n % 2 == 0)
        a = n / 2;
      else
        a = (int)(n / 2);
      for (i = 2; i <= a; i++) {

        if (n % i == 0)
          sum = sum + i;
      }

      if (n == 1)
        printf("%5ld  DEFICIENT\n", n);
      else if (sum > n)
        printf("%5ld  ABUNDANT\n", n);
      else
      if (sum < n)
        printf("%5ld  DEFICIENT\n", n);
      else
        printf("%5ld  PERFECT\n", n);
      q++;

    }
  }
  return 0;
}