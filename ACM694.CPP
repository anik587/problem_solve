#include<stdio.h>

int main() {
  long a, l, i, A, j;
  j = 1;
  while (1) {
    scanf("%lld%lld", & a, & l);

    if (a < 0 && l < 0)
      break;
    else {
      if (a == 0 || a < 0)
        printf("Case %lld: A = %lld, limit = %lld, number of terms = 0\n", j, a, l);
      else {
        A = a;
        for (i = 1; a != 1; i++) {
          if (a % 2 != 0)
            a = a * 3 + 1;
          else
            a = a / 2;
          if (a > l) break;

        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", j, A, l, i);
        j++;
      }
    }
  }
  return 0;
}