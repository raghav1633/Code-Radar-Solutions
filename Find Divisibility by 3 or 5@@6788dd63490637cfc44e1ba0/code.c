#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if((n%3)! && (n%5)!){
        printf("Divisible by Both");
    }
    else if(n%3!){
        printf("Divisible by 3");
    }
    else if(n%5!){
        printf("Divisible by 5");
    }
    return 0;
}