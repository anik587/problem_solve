#include<stdio.h>

#include<math.h>

int main() {
  long int n, b, a;
  while (1) {
    scanf("%ld", & n);
    if (n == 0)
      break;
    a = sqrt(n);
    b = pow(a, 2);
    if (n == b)
      printf("yes\n");
    else
      printf("no\n");

  }
  return 0;
}