#include<stdio.h>

int main() {
  int i, j, k, l, a[100], p, n, t, x, b;
  scanf("%d", & t);
  for (i = 0; i < t; i++) {
    x = 0;
    scanf("%d", & n);
    for (j = 0; j < n; j++)
      scanf("%d", & a[j]);
    b = n - 1;
    for (k = 0; k < b; k++) {
      for (l = 0; l < b - k; l++)
        if (a[l] > a[l + 1]) {
          p = a[l];
          a[l] = a[l + 1];
          a[l + 1] = p;
          x++;

        }

    }

    printf("Optimal train swapping takes %d swaps.\n", x);

  }
  return 0;
}