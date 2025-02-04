#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%s",(a>0 && b>0)|| (a<0 && b<0)?"Same Sign":"Different Sign");
    return 0;
}