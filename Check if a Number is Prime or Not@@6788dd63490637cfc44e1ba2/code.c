#include <stdio.h>
int main() {
    int n;
    int prime=1;
    scanf("%d",&n);
    if(i==0 || i==1){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<(n/2);i++){
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