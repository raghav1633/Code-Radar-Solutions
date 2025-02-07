#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cn=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;cn++,j++){
            printf("%d",cn);
        }
        printf("\n");
    }
    return 0;
}