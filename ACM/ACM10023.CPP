#include<stdio.h>

#include<math.h>

#include<string.h>

#define efs 1e-9
char s[10000];

int main()

{

  double n, p, a, b, i, c, k, d;

  scanf("%lf", & i);
  while (i--) {

    scanf("%lf", & p);

    a = sqrt(p);
    //a+=efs;
    sprintf(s, "%lf", a);
    printf("%s\n", s);
    printf("%.0lf\n\n", a);

  }
  printf("\n");

  return 0;

}