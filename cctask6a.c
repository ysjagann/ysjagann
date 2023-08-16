#include <stdio.h>

int is_prime(int n) {
	int i;
  /* Returns 1 if the given number is prime, else returns 0. */

  if (n <= 1) {
    return 0;
  }

  int count_divisors = 0;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      count_divisors++;
      break;
    }
  }

  if (count_divisors == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  /* Takes an integer as input and prints 1 if it is prime, else prints 0. */

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (is_prime(n)) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}

