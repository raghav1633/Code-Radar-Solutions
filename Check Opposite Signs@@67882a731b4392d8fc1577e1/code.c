
#include <stdio.h>
#include <stdbool.h>

int main() {
  int num1, num2;
    scanf("%d %d", &num1, &num2);

      bool oppositeSigns = (num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0);

        if (oppositeSigns) {
            printf("True\n");
              } else {
                  printf("False\n");
                    }

                      return 0;
                      }

                      