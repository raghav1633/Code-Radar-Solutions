
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
        scanf(" %c", &ch);

            if (isalpha(ch)) {
                    if (isupper(ch)) {
                                printf("Uppercase\n");
                                        } else {
                                                    printf("Lowercase\n");
                                                            }
                                                                } else {
                                                                        printf("Not an alphabet\n");
                                                                            }

                                                                                return 0;
                                                                                }

                                                                                