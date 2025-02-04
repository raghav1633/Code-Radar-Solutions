#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%s",n&2?"Set":"Not Set");
    return 0;
}