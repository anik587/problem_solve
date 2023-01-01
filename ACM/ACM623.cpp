#include <stdio.h>

#include <math.h>

double print_solution(int);

int main(void) {
  long long int no_of_inputs, n;

  long long int ctr = 1;

  scanf("%lld", & no_of_inputs); //Read no of inputs

  do {
    scanf("%lld", & n); //Read the input

    printf("%.0f\n", print_solution(n));

    ctr++;

  } while (ctr <= no_of_inputs);

  return 0;
}

double print_solution(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return n * print_solution(n - 1);

}