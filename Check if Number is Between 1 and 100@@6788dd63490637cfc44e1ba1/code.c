#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%s",n>=1 && n<=100?"In Range":"Out of Range")
    return 0;
}