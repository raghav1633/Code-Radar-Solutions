#include <stdio.h>

int main() {
    int a, b;
    char opera;

    // The key change is adding a space before %c in scanf
    scanf("%d %d %c", &a, &b, &opera); 

    if (opera == '+') {
        printf("%d", a + b);
    } else if (opera == '-') {
        printf("%d", a - b);
    } else if (opera == '*') {
        printf("%d", a * b);
    } else if (opera == '/') {
        if (b == 0) {  // Important: Check for division by zero!
            printf("Error: Division by zero\n");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Error: Invalid operator\n");
    }
    return 0;
}