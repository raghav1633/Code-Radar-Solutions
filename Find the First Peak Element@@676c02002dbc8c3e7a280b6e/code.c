#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>0){
        int mx=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                mx=arr[i+1];
            }
            else{
                printf("%d",mx);
                return 0;
            }
        }
        printf("%d",mx);
        return 0;
    }
    return 0;
}