#include<stdio.h>

#include<math.h>

int main()

{

  double n, p, k, a, b;

  while (scanf("%lf%lf", & n, & p) != EOF)

  {
    a = log(p);
    b = a / n;
    k = exp(b);

    printf("%.0lf\n", k);

  }

  return 0;

}