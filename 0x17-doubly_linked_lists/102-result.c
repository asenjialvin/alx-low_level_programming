#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
  int original_n = n;
  int reversed_n = 0;
  while (n > 0) {
    reversed_n = (reversed_n * 10) + (n % 10);
    n /= 10;
  }
  return original_n == reversed_n;
}

int main() {
  int largest_palindrome = 0;
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      int product = i * j;
      if (is_palindrome(product) && product > largest_palindrome) {
        largest_palindrome = product;
      }
    }
  }

  FILE *file = fopen("102-result", "w");
  if (file) {
    fprintf(file, "%d", largest_palindrome);
    fclose(file);
  } else {
    printf("Error: Could not open file for writing.\n");
  }

  return 0;
}
