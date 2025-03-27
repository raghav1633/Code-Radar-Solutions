// Your code here...
#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int min=n;int cn=0;int i=0;
    while(i<n-1){
        cn=0;
        while(i<n-1 && arr[i]>arr[i+1]){
            cn++;i++;
        }
        min=min>cn?cn:min;
        i++;
    }
    return min;
}