#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        // for spacing
        for(int j=0;j<i;j++){
            printf(" ");
        }
        // for stars
        for(int k=0;k<(n-i+1);k++){
            printf("*");
        }
        for(int l=0;l<(n-i+1)-1;l++){
            printf("*");
        }
     printf("\n");
    }
    return 0;
}