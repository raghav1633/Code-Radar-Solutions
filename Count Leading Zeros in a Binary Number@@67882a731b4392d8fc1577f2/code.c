
#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t n;
        scanf("%u", &n);

            int count = 0;
                if (n == 0) {
                        printf("32\n");
                                return 0;
                                    }

                                        for (int i = 31; i >= 0; i--) {
                                                if ((n >> i) & 1) {
                                                            break;
                                                                    }
                                                                            count++;
                                                                                }

                                                                                    printf("%d\n", count);

                                                                                        return 0;
                                                                                        }

                                                                                        