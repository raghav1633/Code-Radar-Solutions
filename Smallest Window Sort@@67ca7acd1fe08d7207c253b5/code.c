// Your code here...
#include <stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int min=n;int i=0;int cn;
    while(i<n-1){
        if(arr[i]>arr[i+1]){cn=0;
        while(i<n-1 && arr[i]>arr[i+1]){
            if(cn==0){cn++;}
            cn++;i++;
        }
        min=min>cn?cn:min;}
        i++;
    }
    return min;
}