#include <stdio.h>

int main() {
    int n;
    int pr=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",pr);
            if(j>i){
            pr=pr==0?1:0;}
        }
        pr=pr==0?1:0;
    printf("\n");}
    return 0;
}