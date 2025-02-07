#include <stdio.h>

int main() {
    int n;
    int our=1;
    int pr=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",pr);
            pr=pr==0?1:0;
        }
        if(our==0){
            pr==1;
            our==1;
        }
        else{
            pr=0;our=1;
        }
    printf("\n");}
    return 0;
}