#include<stdio.h>

#include<string.h>

int main() {
  int a[100][100] = {
    0
  }, i, j, k, x, y, n, p;

  while (scanf("%d", & n) != EOF) {

    memset(a, 0, sizeof(a));
    p = 0;
    i = 0;
    j = n / 2;
    a[i][j] = 1;
    for (k = 2; k <= n * n; k++) {

      if (i == 0)
        x = n - 1;
      else
        x = i - 1;
      if (j == (n - 1))
        y = n - n;
      else
        y = j + 1;
      if (a[x][y] >= 1)
        i = i + 1;
      else {
        i = x;
        j = y;
      }
      a[i][j] = k;
    }

    for (i = 0; i <= n - 1; i++)
      for (j = 0; j <= n - 1; j++)
        if (i == j)
          p = p + a[i][j];
    printf("n=%d, sum=%d\n", n, p);
    for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= n - 1; j++)
        printf(" %d ", a[i][j]);
      printf("\n");
    }
  }
  return 0;
}