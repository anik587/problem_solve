 #include<stdio.h>

 int a[100];

 int main() {
     int n, i, p, j, k;
     while (1) {
         scanf("%d", & n);
         if (n == 0)
             break;
         else {
             p = 0;
             for (k = 1; k <= n; k++)
                 a[k] = k;

             printf("Discarded cards:");
             for (j = 1; j < n; j++) {
                 for (i = j; i <= n; i++) {
                     if (i == j) {
                         printf(" %d", a[i]);
                         if (j + 1 < n)
                             printf(",");
                         p = a[i + 1];
                     }
                     a[i + 1] = a[i + 2];
                 }
                 a[i - 1] = p;
             }
             printf("\nRemaining card: %d\n", a[n]);
         }
     }
     return 0;
 }