
#include <stdio.h>

int main() {
  int number, bit_position;
    scanf("%d %d", &number, &bit_position);

      int bit = (number >> bit_position) & 1;
        printf("%d\n", bit);

          return 0;
          }

          