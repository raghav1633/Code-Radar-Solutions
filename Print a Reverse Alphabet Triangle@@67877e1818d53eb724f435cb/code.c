#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n;i--){
        for(int j=(n-i)+1;j<=i;j++){
            printf("%d",j+64);
        }
        printf("\n");
    }
    return 0;
}