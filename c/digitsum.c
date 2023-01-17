#include <stdio.h>

#define N (int) (sizeof(digits) / sizeof(digits[0]))

int main() {
  int i, j = 0, n, sum, digits[10] = {0};
  
  scanf("%d", &n);
  if (!n) {
    printf("%d\n", n);
    return 0;
  }
  for (i = 0; i < N; i++) {
    digits[i] = n % 10;
    if (digits[i])
      j++;
    else {
      sum = 0;
      for (i = 0; i < N; i++) {
        sum += digits[i];
        digits[i] = 0;
      }
      i = 0;
      if (j == 1) {
        break;
      }
      j = 0;
      n = sum;
      continue;
    }
    n /= 10;
  }
  printf("%d\n", sum);
  
  return 0;
}