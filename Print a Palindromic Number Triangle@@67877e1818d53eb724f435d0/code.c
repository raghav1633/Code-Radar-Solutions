
#include <stdio.h>

int main() {
  int n, i, j, k;

    scanf("%d", &n);

      for (i = 1; i <= n; i++) {
          // Print leading spaces
              for (j = 1; j <= n - i; j++) {
                    printf(" ");
                        }

                            // Print increasing numbers
                                for (k = 1; k <= i; k++) {
                                      printf("%d", k);
                                          }

                                              // Print decreasing numbers
                                                  for (k = i - 1; k >= 1; k--) {
                                                        printf("%d", k);
                                                            }

                                                                printf("\n");
                                                                  }

                                                                    return 0;
                                                                    }

                                                                    