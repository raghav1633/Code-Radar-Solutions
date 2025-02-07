
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //spacing
        for(int j=1;j<=n-i;j++){
            printf(" ");
        };
        //left print
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        //right print
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }

}
                                                                    