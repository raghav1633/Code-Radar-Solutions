#include <stdio.h>
int main() {
    int n;
    int prime=1;
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<(n/2)+1;i++){
            if(n%i==0){
                printf("Not Prime");
                prime=0;
                break;
            }
        }
        if(prime){
            printf("Prime");
        }
    }
    return 0;
}