#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>0){
    int mx=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        mx=mx<arr[i]?arr[i]:mx;
        min=min<arr[i]?min:arr[i];
    }
    printf("%d %d",min,mx);
    }
    return 0;
}