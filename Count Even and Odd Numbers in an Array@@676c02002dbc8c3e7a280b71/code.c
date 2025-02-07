#include <stdio.h>

int main() {
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        arr[i]%2?odd++:even++;
    }
    printf("%d %d",even,odd);
    return 0;
}