#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%s",a>=18 && b==1 ?"Eligible":"Not Eligible");
    return 0;
}