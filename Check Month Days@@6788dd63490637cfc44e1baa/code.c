#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("%d",28);
        
    }
    else if(n>=1 and n<=7){
        if(n%2){
            printf("%d",31);
        }
        else{
            printf("%d",30);
        }
    }
    else if(n>=8 and n<=12){
        if(n%2){
            printf("%d",30);
        }
        else{
            printf("%d",31);}
        else{
            printf("Invalid month");
        }
    }
    return 0;
}