#include<stdio.h>

int main() {
  long int a, b, c;
  while (scanf("%ld%ld", & a, & b) == 2) {

    if (a > b)
      c = a - b;
    else
      c = b - a;
    printf("%ld\n", c);

  }

  return 0;

}