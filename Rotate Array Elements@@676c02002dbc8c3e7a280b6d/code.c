#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a=scanf("%d",&a);
        arr[i]=a;
    }
    int k=scanf("%d",&k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}