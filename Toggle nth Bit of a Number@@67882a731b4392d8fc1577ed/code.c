
#include <stdio.h>

int main() {
    int number, bitPosition;
        scanf("%d %d", &number, &bitPosition);
            number ^= (1 << bitPosition);
                printf("%d\n", number);
                    return 0;
                    }

                    