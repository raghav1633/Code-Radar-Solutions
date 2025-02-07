#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cn=1
    for(int i=1;i<=n;i++){
        for(cn;cn<=i;cn++){
            printf("%d",cn);
        }
        printf("\n");
    }
    return 0;
}