#include <stdio.h>

int main() {
   char n;
   scanf("%c",&n);
   for(int i=1;i<=n;i++){
    for(int j=1+64;j<=(n-i)+65;j++){
        printf("%c",n);
    }
    printf("\n");
   }
    return 0;
}