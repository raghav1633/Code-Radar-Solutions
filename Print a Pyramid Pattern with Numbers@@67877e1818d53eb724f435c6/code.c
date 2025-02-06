#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int su;
    for(int i=1;i<=n;i++){
        //for spacing
        if(i%2){
            su=(n-i+1)/2;
        }
        else{
            su=(n-i+1)/2+1;
        }
        for(int j=1;j<=su;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}