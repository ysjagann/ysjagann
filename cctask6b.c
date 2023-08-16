#include <stdio.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int n) {
    // Create a list of all the numbers from 2 to n.
    bool is_prime[n + 1];
    int i;
    for (i = 0; i <= n; i++) {
        is_prime[i] = true;
    }

    // Iterate over all of the numbers in the list.
    int k;
    for ( k = 2; i * i <= n; i++) {
        if (is_prime[i]) {
        	int j;
            // If the current number is prime, then eliminate all of its multiples.
            for (j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Print the prime numbers.
    printf("Prime numbers up to %d:\n", n);
    int m;
    for ( m = 2; m <= n; m++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 2) {
        sieve_of_eratosthenes(n);
    } else {
        printf("No prime numbers less than 2.\n");
    }

    return 0;
}
