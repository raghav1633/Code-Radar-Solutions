#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    printf("%s",(n&1)!=0?"Set":"Not Set");
    return 0;
}